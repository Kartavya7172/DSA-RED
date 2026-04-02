#include<iostream>
using namespace std;

int main()
{
    int target = 56;
    int precision = 10;
    double factor = 1;
    double ans = 7;
 
    for(int i=1;i<=precision;i++)
    {
        factor = factor/10;
        for(double j=ans;j*j<=target;j=j+factor)
        {
           ans = j; 
        }
    } 
    cout<<ans;
}