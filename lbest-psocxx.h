#ifndef PSOCXX_H
#define PSOCXX_H

#include <math.h>
#include <vector>
#include <deque>
#include <numeric>
#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <stdio.h>
#include <stdarg.h>
#ifdef __linux__
#   include <time.h>
#else
#   include <windows.h>
#endif

#include "boost/random.hpp"

#include "src/helpers/Random.h"
#include "src/Vector.h"
#include "src/Particle.h"
#include "src/Topology.h"
#include "src/Swarm.h"

#endif
