#ifndef PARTICLE_H
#define PARTICLE_H

namespace psocxx {
namespace lbest {

class Swarm;

class Particle {
    friend class Swarm;

public:
    Particle();
    Particle(const vecf & position);

    float fitness() const;
    vecf & position() const;
    vecf & bestPosition() const;
    vecf & velocity() const;

private:
    std::vector<Particle*> m_neighbors;

    vecf m_position;
    vecf m_bestPosition;
    vecf m_velocity;

    float m_fitness;
};

}
}

#endif
