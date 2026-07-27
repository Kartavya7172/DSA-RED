//Const with pointer

#include<iostream>
using namespace std;

//const with methods
class value
{
    private:
    //mutable is use to change the const variable
    mutable int x;
    int *y;
    const int z = 4;

    public:
    
    //above the z is alraedy declared and define with 4 but as it is constant we change it with value 3
    //this is possible using the initialization list but not buy the constructor
    value(int _val1,int _val2):x(_val1),y(new int(_val2)),z(3){};
    
    int getx() const{
        x = 10; // gives error but we can modify const variable by making them mutable as:-
        return x;
    }
    int gety() {
        return *y;
    }
    

};

void helper(value const &a)
{
    //the below line give error because only the const method are access form the const object
    // a.gety();

}

int main()
{
    value v(2,3);
    int x = v.getx();
    int y = v.gety();
    cout<<x<<" "<<y<<endl;
    
    helper(v);
    //const data not constant pointer
    
    int const* a = new int(2); // const int *a = new int(2); Both line are same
    cout<<*a<<endl;
    int b = 10;
    a = &b;
    cout<<*a<<endl;

    //const pointer non const data
    int *const c = new int(20);
    *c = 30;
    cout<<*c<<endl;

    //const pointer const data
    const int *const j = new int(90);
    //the below lines gives error because the pointer and data both are const
    // *j = 10;
    // int z = 98;
    // j = &z;

}