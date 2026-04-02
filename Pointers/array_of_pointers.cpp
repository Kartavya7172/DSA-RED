#include<iostream>
using namespace std;

int main()
{
    int*arr[5];
    int a = 1;
    arr[0] = &a;
    cout<<arr[0]<<endl;
    cout<<*arr[0]<<endl;
}