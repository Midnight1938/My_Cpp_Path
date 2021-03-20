// ? This is header file
// * we used the function through here

#ifndef CAT_H_
#define CAT_H_

class Cat {
private: // ? Because it stays in the whole shenanigin, 
        // ? It stays here
    bool happy;

public: // ? The three conditions we have to work with
    void madeHappy();
    void madeSad();
    void speak();
};

#endif /* CAT_H_ */