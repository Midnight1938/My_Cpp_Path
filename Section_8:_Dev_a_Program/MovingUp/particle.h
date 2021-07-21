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

        double m_Speed;
        double m_Direction;


    public:
        Particle();
        virtual ~Particle();
        void UpdatePartcl(int Interval);
    };
}
#endif