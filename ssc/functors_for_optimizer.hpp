/*Le présent logiciel est une connaissance propre de SIREHNA, au sens de l'article 2 de
l'Accord-Cadre de Propriété Intellectuelle (Annexe à la convention pluriannuelle avec l'IRT).

On en rappelle ici les paragraphes 5.2.4 et 5.2.5 :
"(...) l'utilisation de la décompilation, du reverse engineering ou de toute autre méthode permettant
de retrouver les codes sources à partir des exécutables est strictement prohibée sauf à obtenir
l'autorisation écrite préalable du Membre ou de l'IRT titulaire de ladite Connaissance Propre."

"En dehors des cas précités un Membre ou l'IRT peut opposer à un autre Membre ou à l'IRT ses
Connaissances Propres conformément à la loi, rien dans ce qui précède ne pouvant être interprété
comme une limitation des droits d'un Membre ou de l'IRT d'obtenir réparation du préjudice causé par
l'utilisation non consentie d'une de ses Connaissances Propres par un Membre, par l'IRT dans tous
les cas qui ne sont pas explicitement prévus dans l'ACPI, cette réparation pouvant être obtenue par
toutes les voies de droit appropriées."

(c) SIREHNA 2014-2015.
*/
#ifndef functors_for_optimizer_guard
#define functors_for_optimizer_guard

#include "ssc/functors_for_optimizer/Abs.hpp"
#include "ssc/functors_for_optimizer/Binary.hpp"
#include "ssc/functors_for_optimizer/Constant.hpp"
#include "ssc/functors_for_optimizer/Cos.hpp"
#include "ssc/functors_for_optimizer/Difference.hpp"
#include "ssc/functors_for_optimizer/Divide.hpp"
#include "ssc/functors_for_optimizer/FunctionMatrix.hpp"
#include "ssc/functors_for_optimizer/FunctorAlgebra.hpp"
#include "ssc/functors_for_optimizer/Grad.hpp"
#include "ssc/functors_for_optimizer/GradHes.hpp"
#include "ssc/functors_for_optimizer/IfPositive.hpp"
#include "ssc/functors_for_optimizer/Ln.hpp"
#include "ssc/functors_for_optimizer/Multiply.hpp"
#include "ssc/functors_for_optimizer/N_ary.hpp"
#include "ssc/functors_for_optimizer/Node.hpp"
#include "ssc/functors_for_optimizer/NodeVisitor.hpp"
#include "ssc/functors_for_optimizer/Null.hpp"
#include "ssc/functors_for_optimizer/Nullary.hpp"
#include "ssc/functors_for_optimizer/Parameter.hpp"
#include "ssc/functors_for_optimizer/PiecewiseConstantFunctor.hpp"
#include "ssc/functors_for_optimizer/PiecewiseLinearFunctor.hpp"
#include "ssc/functors_for_optimizer/PiecewiseParabolicFunctor.hpp"
#include "ssc/functors_for_optimizer/Pow.hpp"
#include "ssc/functors_for_optimizer/Serialize.hpp"
#include "ssc/functors_for_optimizer/SerializeReversePolish.hpp"
#include "ssc/functors_for_optimizer/Sign.hpp"
#include "ssc/functors_for_optimizer/Sin.hpp"
#include "ssc/functors_for_optimizer/SplineFunctor.hpp"
#include "ssc/functors_for_optimizer/Sqrt.hpp"
#include "ssc/functors_for_optimizer/State.hpp"
#include "ssc/functors_for_optimizer/StateAndParameterCounter.hpp"
#include "ssc/functors_for_optimizer/StateGenerator.hpp"
#include "ssc/functors_for_optimizer/StateGetter.hpp"
#include "ssc/functors_for_optimizer/Sum.hpp"
#include "ssc/functors_for_optimizer/Unary.hpp"


#endif
