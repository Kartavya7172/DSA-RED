#include<iostream>
using namespace std;

void sortzeroandone(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    int i= 0;
    while(start < end)
    {
        if(arr[start] == 0)
        {
    
            start++;
            
        }
        if(arr[start] == 1)
        {
            swap(arr[start],arr[end]);
            end--;
        }
     
    }
}

int main()
{
    int arr[5] = {0,1,0,1,0};
    sortzeroandone(arr,5);
    for(int i=0;i<5;i++)
    {
         cout<<arr[i];
    }
    return 0;
}