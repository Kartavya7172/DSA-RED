#include<iostream>
#include<limits.h>
using namespace std;

int findmin(int arr[][3],int row,int col)
{
    int mini = INT_MAX;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            mini = min(mini,arr[i][j]);

        }
     
    } 
    return mini;
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
  
    int ans = findmin(arr,3,3);
    cout<<ans<<endl;

}