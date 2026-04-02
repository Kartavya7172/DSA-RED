#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class functorone
{
    public:
    bool operator() (int a,int b)
    {
        //ham isko decending order me place karna chate he kyuki agar a>b
        //hoga too hum a ko phele place kar denge so its a desecnding order
        return a>b;
    }
};
int main()
{
   functorone cmp;
   if(cmp(10,5) == true)
   {
    cout<<"10 is greater than 5"<<endl;
   }
   else
   {
    cout<<"10 is not grater than 5"<<endl;
   }
}