#ifndef SWARM_H
#define SWARM_H

#include <vector>
#include <boost/function.hpp>


namespace psocxx {
namespace lbest {

class Particle;

class Swarm {

public:
    Swarm(unsigned int numberOfParticles);
    ~Swarm();

    void configureSpace(unsigned int dims, float lo = 0.0f, float hi = 1.0f);
    void setParameters(float omega, float phi_p, float phi_g);
    void setFitnessCallback(boost::function<float (Particle const &)> callback);
    void setRandomGenerator(boost::function<float (void)> callback);
    void setTopology(Topology::TopologyType type);

    void step();

    const std::vector<psocxx::lbest::Particle> & particles();

    const Particle & bestParticle() const;
    const vecf & bestSolution() const;
    float bestFitness() const;

private:
    // Random generator functions;
    boost::function<float (void)> m_randomGenerator;
    boost::function<float (void)> m_velocityGenerator;
    boost::function<float (void)> m_positionGenerator;

    // Fitness evaluation function;
    boost::function<float (Particle&)> m_fitnessCallback;

    //
    unsigned int m_numParticles;

    //
    std::vector<Particle> m_particles;

    // Upper and lower boundaries;
    float m_boundLower;
    float m_boundUpper;

    //
    unsigned int m_dimensions;

    //
    Topology::TopologyType m_topologyType;

    // Parameters;
    float m_omega;
    float m_phiG;
    float m_phiP;
};

}
}

#endif
