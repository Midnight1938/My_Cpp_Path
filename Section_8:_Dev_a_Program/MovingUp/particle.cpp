#include "particle.h"
#include <math.h>

namespace Screen_Maykr
{

    Particle::Particle() : m_x(0), m_y(0)
    {
        m_Direction = ((2 * M_PI * rand()) / RAND_MAX);
        m_Speed = ((0.0001 * rand()) / RAND_MAX);
    }
    Particle::~Particle()
    {
        // Nothing Here
    }
    void Particle::UpdatePartcl(int Interval)
    {
        double xSpeed = m_Speed * cos(m_Direction);
        double ySpeed = m_Speed * sin(m_Direction);

        m_x += xSpeed * Interval;
        m_y += ySpeed * Interval;
    }

}
