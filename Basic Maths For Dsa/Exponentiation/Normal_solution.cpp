#include<iostream>
using namespace std;

int exponentiation(int a,int b)
{
    int ans = 1;
    for(int i=0;i<b;i++)
    {
        ans = ans*a;
    }
    return ans;
}

int main()
{
    int a = 5;
    int b = 4;
    
    int ans = exponentiation(a,b);
    cout<<ans<<endl;
    return 0;
}