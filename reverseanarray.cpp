#include<iostream>
using namespace std;

 void reversearray(int arr[],int size)
 {
     int start = 0;
     int end = size-1;
     
     while(start<=end)
     {
        swap(arr[start],arr[end]);
        start++;
        end--;
     }

 }

 int main()
 {
    int n = 0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reversearray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
 }