
#ifndef CAT_H_
#define CAT_H_
/*
Constructors and Destructors have no return type
Like 'int' 'void'
*/
class Cat
{
private:
    bool happy;

public:
    void speak();
    Cat();  // Constructor
    ~Cat(); // Destructor
};

#endif /* CAT_H_ */