/*
ABCDE
ABCD
ABC
AB
A
*/
#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int row =1;row<=n;row++)
        {
            for(int col=0;col<=(n-row);col++)
            {
                char ch = 'A'+col;
                cout<<ch;
                
            }
            cout<<endl;
        }
}