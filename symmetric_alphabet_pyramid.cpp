/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA*/
#include<iostream>
using namespace std;

int main()
{
    int n= 5;
    for(int row =1 ;row<=n;row++)
    {
        for(int col = 1;col<=n-row;col++)
        {
            cout<<" ";
        }
        char ch = 'A';
        for(int col = 1;col<=row;col++)
        {
            cout<<ch++;
        }
        ch = ch-2;
        while(ch>='A')
        {
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
}