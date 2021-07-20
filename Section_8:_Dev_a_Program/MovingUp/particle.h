// ? This is header file
// * we used the function through here

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace Screen_Maykr
{
    struct Particle
    {
        double m_x;
        double m_y;

    public:
        Particle();
        virtual ~Particle();
    };
}
#endif