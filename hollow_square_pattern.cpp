#include<iostream>
using namespace std;
int main()
{
    int n = 4,m=6;
    for(int row = 0;row<n;row++)
    {
        for(int col=0;col<m;col++ )
        {
            if(row == 0 || row == n-1 || col == 0|| col == m-1)\
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}