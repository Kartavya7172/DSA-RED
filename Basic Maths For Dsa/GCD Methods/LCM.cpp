#include<iostream>
using namespace std;

int find_gcd(int a,int b)
{
    if( a == 0 )return b;
    if(b == 0) return a;

    while(a>0 && b>0)
    {
        if(a>b)
        {
            a= a-b;
        }
        else
        {
            b = b-a;
        }
    }
    return a == 0 ? b:a;
}
int main()
{
    int a = 72;
    int b = 24;
    int ans = find_gcd(a,b);

    int lcm = (a*b)/ans;
    cout<<lcm<<endl;

    return 0;
}