#include<iostream>
#include<climits>
using namespace std;
int searchinarry(int arr[],int n,int key)
{
    if(arr[n-1] == key) 
       return n-1;
    else if(n-1 == 0 && arr[n-1] != key)
       return -1;
    searchinarry(arr,n-1,key);
    //return -1;
}
void minelement(int arr[],int size,int index,int &mini)
{
    if(index>=size)
    {
        return;
    }
    mini=min(mini,arr[index]);
    minelement(arr,size,index+1,mini);
}
void maxlement(int arr[],int size,int index,int &maxi)
{
    if(index>=size)
    {
        return;
    }
    maxi=max(maxi,arr[index]);
    maxlement(arr,size,index+1,maxi);
}

int main()
{
    int arr[] = {98,4,2,6,2,0};
    int min = INT_MAX;
    int index = searchinarry(arr,6,1);
    cout<<index<<endl; 
    minelement(arr,6,0,min);
    cout<<min<<endl;
    int maxi = INT_MIN;
    maxlement(arr,6,0,maxi);
    cout<<maxi<<endl;
    
    return 0;
}