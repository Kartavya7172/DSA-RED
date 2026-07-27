#include<iostream>
using namespace std;

class addition1{

public:
    int real;
    int img;
    
    addition1()
    {
       this->real = -1;
       this->img = -1;
    }
    
    addition1(int real,int img)
    {
       this->real = real;
       this->img = img;
    }

    addition1 operator+(const addition1 &B)
    {
        addition1 temp;
        temp.real = this->real+B.real;
        temp.img = this->img+B.img;

        return temp;
    } 


};
class Complex:public addition1{

public:

    bool ans;
    Complex(int real,int img):addition1(real,img){
        ans = false;
    }

    Complex operator=(const Complex &B)
    {
       if(this->real == B.real && this->img == B.img)
       {
        ans = true;
       }
    }
    void print()
    {
        if(ans == true)
        {
            cout<<"The complex number are equal"<<endl;
        }else{
            cout<<"The number are not equal"<<endl;
        }
    }
    
};
int main()
{
    addition1 a(2,3);
    addition1 b(2,5);
    addition1 c;
    c = a+b;
    cout<<c.real<<"+"<<c.img<<"i"<<endl;

    Complex d;
    a=b;
    d.print();
    return 0;
}