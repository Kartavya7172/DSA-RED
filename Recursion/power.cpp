#include<iostream>
using namespace std;

int pow(int a,int n)
{
      if(n == 1) return a;
      int pow1 = pow(a,n-1);
      int powerans = a*pow1;
      return powerans;
}

int main()
{
    int ans = pow(2,5);
    cout<<ans<<endl;
    return 0;
}