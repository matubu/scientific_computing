/*
 * solve.hpp
 *
 * \date 21 mars 2014
 *      Author: cec
 */

#ifndef SOLVE_HPP_
#define SOLVE_HPP_

#include "ssc/solver/DiscreteSystem.hpp"
#include "ssc/solver/EventHandler.hpp"
#include "ssc/solver/Scheduler.hpp"

#include "ssc/macros/tr1_macros.hpp"
#include <boost/numeric/odeint/stepper/controlled_step_result.hpp>

#include TR1INC(memory)
namespace ssc
{
    namespace solver
    {
        typedef std::shared_ptr<DiscreteSystem> DiscreteSystemPtr;
        template <typename StepperType, typename SystemType, typename ObserverType>
        void solve_for_constant_step(SystemType &sys, ObserverType &observer, StepperType &stepper,
                                     Scheduler &scheduler, EventHandler &event_handler, const std::vector<DiscreteSystemPtr>& discrete_systems)
        {
            const double tstart = scheduler.get_time();
            sys.initialize_system_outputs_before_first_observation();
            observer.observe(sys, tstart, discrete_systems);
            // All variables should now be in the sytem: let's check this
            observer.check_variables_to_serialize_are_available();
            while (scheduler.has_more_time_events())
            {
                const double t = scheduler.get_time();
                
                const auto discrete_state_updaters = scheduler.get_discrete_state_updaters_to_run();
                for (const auto state_updater : discrete_state_updaters)
                {
                    state_updater(scheduler, &sys);
                }
                const double dt = scheduler.get_step();
                stepper.do_step(sys, sys.state, t, dt);
                
                sys.force_states(sys.state, t);
                if (event_handler.detected_state_events())
                {
                    event_handler.locate_event();
                    event_handler.run_event_actions();
                }
                scheduler.advance_to_next_time_event();
                observer.observe(sys, scheduler.get_time(), discrete_systems);
            }
        }

        template <typename StepperType, typename SystemType, typename ObserverType>
        void solve_for_adaptive_step(SystemType &sys, ObserverType &observer, StepperType &stepper,
                                     Scheduler &scheduler, EventHandler &event_handler, const std::vector<DiscreteSystemPtr>& discrete_systems)
        {
            const double tstart = scheduler.get_time();
            sys.initialize_system_outputs_before_first_observation();
            observer.observe(sys, tstart, discrete_systems);
            // All variables should now be in the sytem: let's check this
            observer.check_variables_to_serialize_are_available();
            while (scheduler.has_more_time_events())
            {
                const double t = scheduler.get_time();
                const double dt = scheduler.get_step();
                const boost::numeric::odeint::controlled_step_result res
                    = stepper.try_step(sys, sys.state, t, dt);
                if (res == boost::numeric::odeint::success)
                {
                    sys.force_states(sys.state, t);
                    if (event_handler.detected_state_events())
                    {
                        event_handler.locate_event();
                        event_handler.run_event_actions();
                    }
                    const auto discrete_state_updaters
                        = scheduler.get_discrete_state_updaters_to_run();
                    for (const auto state_updater : discrete_state_updaters)
                    {
                        state_updater(scheduler, &sys);
                    }
                    scheduler.advance_to_next_time_event();
                    observer.observe(sys, t, discrete_systems);
                }
                else
                {
                    scheduler.add_time_event(t + dt / 2);
                    scheduler.advance_to_next_time_event();
                }
            }
        }

        template <typename StepperType, typename SystemType, typename ObserverType>
        void quicksolve(SystemType &sys, Scheduler &scheduler, ObserverType &observer, const std::vector<DiscreteSystemPtr>& discrete_systems = {})
        {
            StepperType stepper;
            EventHandler event_handler;
            solve_for_constant_step<StepperType, SystemType>(sys, observer, stepper, scheduler,
                                                             event_handler, discrete_systems);
        }
    }
}

#endif /* SOLVE_HPP_ */
