#include<iostream>
using namespace std;
#if !defined(BIRD_H)
#define BIRD_H
class bird
{
 public:
    virtual void fly() = 0;
    virtual void eat() = 0;
};

class piegon : public bird{
    private:

    void fly()
    {
        cout<<"Piegon fly high"<<endl;
    }
    void eat()
    {
        cout<<"piegon eats faster"<<endl;
    }
};


class eagle : public bird{
    private:

    void fly()
    {
        cout<<"eagle fly high"<<endl;
    }
    void eat()
    {
        cout<<"eagle eats faster"<<endl;
    }
};


#endif // BIRD_H
