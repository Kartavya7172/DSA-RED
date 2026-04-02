#include<iostream>
using namespace std;

void printpairs(int arr[],int size)
{
    int n = size;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"["<<arr[i]<<","<<arr[j]<<"]";
        }
        cout<<endl;
    }
}


int main()
{
    int arr[4] = {1,2,3,4};
    printpairs(arr,4);
    return 0;
}