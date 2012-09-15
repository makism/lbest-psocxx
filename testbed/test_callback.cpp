#include "lbest-psocxx.h"

float fitness(psocxx::lbest::Particle const &)
{
    std::cout << "fitness" << std::endl;
    return 0.0f;
}

int main(int argc, char** argv) {

    psocxx::lbest::Swarm s(128);
    s.setFitnessCallback(fitness);
    s.step();

    return 0;
}
