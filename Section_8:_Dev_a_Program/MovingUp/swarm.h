// ? This is header file
// * we used the function through here

#include "particle.h"

#ifndef SWARM_H_
#define SWARM_H_

namespace Screen_Maykr
{
  class Swarm
  {
  public:
    const static int nParticles = 1000;

  private:
    Particle *m_pParticles;

  public:
    Swarm();
    virtual ~Swarm();
    void swarmUpdate();

    const Particle * const getParticles() { return m_pParticles; };
  };
}

#endif