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
    void Swarm::swarmUpdate(){
        for (int i = 0; i < Swarm::nParticles; i++)
        {
            m_pParticles[i].UpdatePartcl();
        }
        
    }
}
