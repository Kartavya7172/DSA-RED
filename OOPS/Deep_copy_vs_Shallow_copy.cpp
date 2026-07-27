#include<iostream>
using namespace std;

class abc{

    public:
    int x;
    int *y;

    abc(int val1,int val2):x(val1),y(new int(val2)){}

    //Deafult dump constructor makes the shallow copy
    // abc(abc &obj)
    // {
    //     x = obj.x;
    //     y = obj.y;
    // }

    //making the smart constructor for the deep copy
    abc(abc &obj1)
    {
        x = obj1.x;
        y = new int(*obj1.y);
    }
    void print()
    {
        cout<<"X:"<<x<<endl;
        cout<<"Y address is :-"<<y<<endl;
        cout<<"Value at the y is:-"<<*y<<endl;
    }
};

int main()
{
    abc *a = new abc(2,3);
    a->print();
    abc b = *a;
    b.print();
    return 0;
}