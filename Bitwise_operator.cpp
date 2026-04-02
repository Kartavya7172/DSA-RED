#include<iostream>
using namespace std;

int main()
{
    int a = 768;
    int b = 11;
    
    //&operator
    cout<<(a&b)<<endl;
    // | operator
    cout<<(a|b)<<endl;
    // ~(Not) operator
    cout<<(~a)<<endl;
    //<< left shift operator
    cout<<(5<<1)<<endl;  // it multiply the value by 2
    //<right shif operator
    cout<<(4>>1)<<endl; // it divide the value by 2
    //XOR operator
    cout<<(5^6)<<endl;

}