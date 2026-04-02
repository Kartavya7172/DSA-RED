#include<iostream>
using namespace std;

int factorial(int n)
{   
    if (n==0 || n == 1) return 1;
    int no = factorial(n-1);
    int biggans = n*no;
    return biggans;
}
int main()
{
    int n = 5;
    int ansrec = factorial(n-1);
    cout<<n*ansrec<<endl;
    return 0;
}