#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
   
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main()
{
    //int arr[10]; for garbage value check
    int arr[10] = {0}; // to initialize arry with 0
    printarray(arr,10);
    cout<<sizeof(arr);//to check the size of array
    return 0;
}