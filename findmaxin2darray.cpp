#include<iostream>
#include<limits.h>
using namespace std;

int findmax(int arr[][3],int row,int col)
{
    int maxi = INT_MIN;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            maxi = max(maxi,arr[i][j]);

        }
     
    } 
    return maxi;
}


int main()
{
    int arr[3][3];
    int target = 0;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
  
    int ans = findmax(arr,3,3);
    cout<<ans<<endl;

}