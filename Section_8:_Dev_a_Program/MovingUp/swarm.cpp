#include "swarm.h"

namespace Screen_Maykr
{

    Swarm::Swarm() : lastTime(0)
    {
        m_pParticles = new Particle[nParticles];
    }
    Swarm::~Swarm()
    {
        delete[] m_pParticles;
    }
    void Swarm::swarmUpdate(int Elapsed)
    {
        int Interval = Elapsed - lastTime;

        for (int i = 0; i < Swarm::nParticles; i++)
        {
            m_pParticles[i].UpdatePartcl(Interval);
        }
        lastTime = Elapsed;
    }
}
