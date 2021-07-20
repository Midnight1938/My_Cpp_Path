// ? This is header file
// * we used the function through here

#ifndef PARTICLE_H_
#define PARTICLE_H_

#include <stdlib.h>

namespace Screen_Maykr
{
    struct Particle
    {
        double m_x;
        double m_y;

        double m_xSpeed = 0.01 * (((2.0 * rand()) / RAND_MAX) - 1);
        double m_ySpeed = 0.01 * (((2.0 * rand()) / RAND_MAX) - 1);

    public:
        Particle();
        virtual ~Particle();
        void UpdatePartcl();
    };
}
#endif