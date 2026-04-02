#include<iostream>
using namespace std;
void countinftail(int current,int n)
{
    if(current>n) return;
    cout<<current<<" ";
    countinftail(current+1,n);
}
int main()
{
    countinftail(1,5);
    return 0;
}