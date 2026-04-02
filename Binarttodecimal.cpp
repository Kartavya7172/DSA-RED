#include<iostream>
#include<cmath>
using namespace std;

int binarytodecimal(int n)
{
    int ans = 0;
    int i =0;
    while(n > 0)
    {
        int bit = n%10;
        
        ans = ans+bit*pow(2,i);
        n = n/10;
        i++;
    }
    return ans;
}


int main()
{
    int no = 0;
    cin>>no;
    int result = binarytodecimal(no);
    cout<<result<<endl;
    return 0;
}