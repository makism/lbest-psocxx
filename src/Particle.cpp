#include "lbest-psocxx.h"


namespace psocxx {
namespace lbest {

Particle::Particle()
{
}

Particle::Particle(const vecf & position)
    : m_position(position),
      m_bestPosition(position),
      m_velocity(zero_vecf(position.size())),
      m_fitness(0.0f)
{
}

}
}
