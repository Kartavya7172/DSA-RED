#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i=0;i<n;i++)
    {
        
       
        for(int j = 0;j<2*n-1;j++)
        {
            int k = j;
            if(j<i)
            {
               cout<<" ";
            }
            else if(k<((2*n)-i-1))
            {
                cout<<"*";
               
            }
            else
            {
                cout<<" ";
            }
           
        }
        cout<<endl;
    }
}