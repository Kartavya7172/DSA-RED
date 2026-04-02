#include<iostream>
#include<vector>
using namespace std;
void printarr(int arr[],int n,int index)
{
     if(index>=n) return;
     cout<<arr[index]<<" ";
     printarr(arr,n,index+1);
     
}

void printreverse(int arr[],int n)
{
    if(n<1) return;
    cout<<arr[n-1]<<" ";
    printreverse(arr,n-1);
    
}
int main()
{
    int arr[] = {1,2,3,45};
    printarr(arr,4,0);
    cout<<endl;
    printreverse(arr,4);

}