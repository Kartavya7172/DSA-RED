#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    for(int row=1;row<=n;row++)
        {
           
                for(int col=1;col<=row;col++)
                {
                    cout<<col;
                }
                for(int col=1;col<=2*(n-row);col++)
                {
                    cout<<" ";
                }
                int k = row;
                for(int col=1;col<=row;col++)
                { 
                    cout<<k;
                    k--;
                }
                cout<<endl;
            
            
        }
}