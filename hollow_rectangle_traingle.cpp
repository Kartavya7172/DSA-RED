#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i=0;i<n;i++)
    {
        if(i == 0 || i== 1 || i== n-1)
        {
            for(int j = 0;j<=i;j++)
            {
                cout<<"* ";
            }
            
            
        }
        else
    {
        cout<<"* ";
        for(int k=0;k<i-1;k++)
        {
            cout<<"  ";
        }
        cout<<"* ";
       
        
    }
    cout<<endl;
    
    }
    
}