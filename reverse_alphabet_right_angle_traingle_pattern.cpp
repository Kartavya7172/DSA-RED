/*
E
DE
CDE
BCDE
ABCDE*/
#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int row = 1;row<=n;row++)
    {
        char ch = 'A'+(n-row);
        for(int col =1 ;col<=row;col++)
        {
            cout<<ch++;
        }
        cout<<endl;
    }
}