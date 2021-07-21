#include "particle.h"
#include <math.h>

namespace Screen_Maykr
{

    Particle::Particle() : m_x(0), m_y(0)
    {
        Init();
    }
    Particle::~Particle()
    {
    }

    void Particle::Init()
    {
        m_x = 0;
        m_y = 0;
        m_Direction = ((2 * M_PI * rand()) / RAND_MAX);
        m_Speed = ((0.045 * rand()) / RAND_MAX);

        m_Speed *= m_Speed;
    }
    void Particle::UpdatePartcl(int Interval)
    {
        m_Direction += Interval * 0.00035;
        double xSpeed = m_Speed * cos(m_Direction);
        double ySpeed = m_Speed * sin(m_Direction);

        m_x += xSpeed * Interval;
        m_y += ySpeed * Interval;

        if (m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1)
        {
            Init();
        }
        if (rand() < RAND_MAX / 100) //? Remake some marticles
        {
            Init();
        }
    }

}
