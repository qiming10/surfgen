#ifndef GENGRID_H
#define GENGRID_H

#include <cmath>
#include "grid.h"

enum SurfaceType {JACK, WIFFLE_CUBE, TORUS, SPHERE, MOBIUS_STRIP, KLEIN_BOTTLE, HYPERBOLOID_ONE_SHEET, CAYLEY, BOHEMIAN_DOME, CHUBS, QUADRIFOLIA, DEVIL, QUARTIC_CYLINDER, GUMDROP_TORUS, BARTH_SEXTIC, BOHEMIAN_STAR};

void generate(Grid& grid, SurfaceType surface_type);
#endif
