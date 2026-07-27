#include<iostream>
using namespace std;

class shape{
    public:

    virtual void draw()
    {
        cout<<"Drawing Generic shape..."<<endl;
    }
};
class circle : public shape{
    public:

    void draw()
    {
        cout<<"Drawing circle shape..."<<endl;
    }
};
class traingle : public shape{
    public:

    void draw()
    {
        cout<<"Drawing traingle shape..."<<endl;
    }
};


int main()
{
    //normal doing on the stack
    // shape s;
    // s.draw();

    // circle c;
    // c.draw();

    // traingle t;
    // t.draw();

    //normal doing on the heap
    // shape *s = new shape();
    // s->draw();
    // circle *c = new circle();
    // c->draw();
    // traingle *t = new traingle();aa
    // t->draw();

    // //upcasting
    // shape *s = new circle();
    // s->draw();

    //downcasting
    shape *s = new shape(); 
    circle *c = (circle *)s;
    c->draw();
    return 0;
}