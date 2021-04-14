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
#ifndef interpolation_guard
#define interpolation_guard

#include "ssc/interpolation/ConstantStepInterpolator.hpp"
#include "ssc/interpolation/CubicRunoutSplines.hpp"
#include "ssc/interpolation/IndexFinder.hpp"
#include "ssc/interpolation/Interpolator.hpp"
#include "ssc/interpolation/InterpolatorException.hpp"
#include "ssc/interpolation/LinearInterpolation.hpp"
#include "ssc/interpolation/LinearInterpolationVariableStep.hpp"
#include "ssc/interpolation/NaturalSplines.hpp"
#include "ssc/interpolation/ParabolicCoefficients.hpp"
#include "ssc/interpolation/ParabolicInterpolation.hpp"
#include "ssc/interpolation/ParabolicInterpolationException.hpp"
#include "ssc/interpolation/ParabolicRunoutSplines.hpp"
#include "ssc/interpolation/PiecewiseConstant.hpp"
#include "ssc/interpolation/PiecewiseConstantException.hpp"
#include "ssc/interpolation/PiecewiseConstantVariableStep.hpp"
#include "ssc/interpolation/SplineVariableStep.hpp"
#include "ssc/interpolation/Splines.hpp"
#include "ssc/interpolation/SplinesException.hpp"
#include "ssc/interpolation/TwoDimensionalInterpolation.hpp"
#include "ssc/interpolation/TwoDimensionalInterpolationVariableStep.hpp"
#include "ssc/interpolation/VariableStepInterpolation.hpp"
#include "ssc/interpolation/VectorOfEquallySpacedNumbers.hpp"
#include "ssc/interpolation/VectorOfEquallySpacedNumbersException.hpp"


#endif
