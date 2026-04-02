#include<iostream>
using namespace std;

void printtriplets(int arr[],int size)
{
    int n = size;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k = 0;k<n;k++ )
            {
               cout<<"["<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"]";
            }
            }
        cout<<endl;
    }
}


int main()
{
    int arr[4] = {1,2,3,4};
    printtriplets(arr,4);
    return 0;
}