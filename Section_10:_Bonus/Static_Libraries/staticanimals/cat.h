// ? This is header file
// * we used the function through here

#ifndef CAT_H_
#define CAT_H_

namespace CatLib
{
    void saySomething();
    class cat
    {
    public:
        cat();
        void Speak();
        virtual ~cat();
    };
};

#endif