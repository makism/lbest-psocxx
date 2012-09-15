#include "lbest-psocxx.h"


namespace psocxx {
namespace lbest {

Swarm::Swarm(unsigned int numberOfParticles)
    : m_numParticles(numberOfParticles)
{
}

Swarm::~Swarm()
{
}

void Swarm::configureSpace(unsigned int dims, float lo, float hi)
{
    m_dimensions = dims;
    m_boundLower = lo;
    m_boundUpper = hi;

//    m_rand = Helpers::Random::Instance(lo, hi);
}

void Swarm::setParameters(float omega, float phi_p, float phi_g)
{
    m_omega = omega;
    m_phiP = phi_p;
    m_phiG = phi_g;
}

void Swarm::setFitnessCallback(boost::function<float (Particle const &)> callback)
{
    m_fitnessCallback = callback;
}

void Swarm::setRandomGenerator(boost::function<float (void)> callback)
{
    m_randomGenerator = callback;
}

void Swarm::step()
{
    Particle p;
    m_fitnessCallback(p);
}

}
}
