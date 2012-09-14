#ifndef SWARM_H
#define SWARM_H


namespace psocxx {
namespace lbest {

class Swarm {

public:
    Swarm(unsigned int numberOfParticles, Topology::TopologyType type);
    ~Swarm();

    void configureSpace(unsigned int dims, float lo = 0.0f, float hi = 1.0f);
    void setParameters(float omega, float phi_p, float phi_g);

protected:

private:
    Helpers::Random* m_rand;

    unsigned int m_numParticles;

    // Upper and lower boundaries;
    float m_boundLower;
    float m_boundUpper;

    //
    unsigned int m_dimensions;

    // Parameters;
    float m_omega;
    float m_phiG;
    float m_phiP;

};

}
}

#endif
