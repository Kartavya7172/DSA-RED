#include<iostream>
using namespace std;

class setvalues
{
    public:
    //static data member
    static int x;
    static int y;
    
    static void setvalue(int val1,int val2){
        setvalues::x = val1;
        setvalues::y= val2;
    };


};
int setvalues::x;
int setvalues::y;

int main()
{
    setvalues::setvalue(2,3);
    cout<<setvalues::x<<" "<<setvalues::y;
    cout<<endl;
    setvalues::setvalue(10,30);
    cout<<setvalues::x<<" "<<setvalues::y;

    return 0;
}