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
#ifdef __linux__
#   include <time.h>
#else
#   include <windows.h>
#endif

#include <boost/foreach.hpp>
#include <boost/numeric/ublas/vector.hpp>
typedef boost::numeric::ublas::vector<float> vecf;
typedef boost::numeric::ublas::zero_vector<float> zero_vecf;

std::ostream & operator<< (std::ostream & os, const vecf & vector);

#include "src/helpers/Random.h"
#include "src/Particle.h"
#include "src/Topology.h"
#include "src/Swarm.h"

#endif
