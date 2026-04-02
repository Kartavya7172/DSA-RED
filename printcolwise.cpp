#include<iostream>
using namespace std;

void printcolwise(int arr[][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[j][i]<<",";
        }
        cout<<endl;
    } 
}


int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    printcolwise(arr,3,3);

}