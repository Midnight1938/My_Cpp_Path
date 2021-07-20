#include "swarm.h"

namespace Screen_Maykr
{

    Swarm::Swarm()
    {
        m_pParticles = new Particle[nParticles];
    }
    Swarm::~Swarm()
    {
        delete[] m_pParticles;
    }
}
