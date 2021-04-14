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
#ifndef geometry_guard
#define geometry_guard

#include "ssc/geometry/Angle.h"
#include "ssc/geometry/Angle.hpp"
#include "ssc/geometry/ConstantAzimuthLeg.hpp"
#include "ssc/geometry/ConstantAzimuthLegChain.hpp"
#include "ssc/geometry/Geometry.h"
#include "ssc/geometry/GreatCircle.h"
#include "ssc/geometry/LatitudeLongitude.hpp"
#include "ssc/geometry/Leg.hpp"
#include "ssc/geometry/LegChain.hpp"
#include "ssc/geometry/PointInCartesianPolygon.hpp"
#include "ssc/geometry/PointInGeographicalPolygon.hpp"
#include "ssc/geometry/PointInPolygon.hpp"
#include "ssc/geometry/PointInPolygonPimpl.hpp"
#include "ssc/geometry/PointInSphericalPolygon.hpp"
#include "ssc/geometry/ShortestPathLeg.hpp"
#include "ssc/geometry/ShortestPathLegChain.hpp"
#include "ssc/geometry/Track.hpp"
#include "ssc/geometry/Vector3D.h"
#include "ssc/geometry/epsilon_algorithm.hpp"
#include "ssc/geometry/loxodrome_on_ellipsoid.hpp"
#include "ssc/geometry/min_search_golden_section.hpp"


#endif
