#include<iostream>
using namespace std;

pair<int,int> search(int arr[][3],int row,int col,int target)
{
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == target)
            {
                return {i,j};
            }

        }
     
    } 
    return {-1,-1};
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
    cin>>target;
    pair<int,int> ans = search(arr,3,3,target);
    cout<<ans.first<<ans.second<<endl;

}