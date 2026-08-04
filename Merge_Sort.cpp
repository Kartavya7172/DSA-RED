#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr,int st,int mid,int en)
{
    int arr1start = st;
    int arr2start = mid+1;
    vector<int> temp;
    while(arr1start<=mid && arr2start <= en)
    {
   
        if(arr[arr1start] <= arr[arr2start])
        {
            temp.push_back(arr[arr1start]);
            arr1start++;
        }else{
            
            temp.push_back(arr[arr2start]);
            arr2start++;
        }
    }

    while(arr1start<=mid)
    {
        temp.push_back(arr[arr1start]);
            arr1start++;
    }
    
    while(arr2start<=en)
    {
        temp.push_back(arr[arr2start]);
            arr2start++;
    }

    for(int idx =0;idx<temp.size();idx++)
    {
        arr[idx+st] = temp[idx];
    }
}

void sort1(vector<int> &arr,int s,int e)
{
    if(s<e)
    {
        int mid = s+(e-s)/2;

        sort1(arr,s,mid);
        sort1(arr,mid+1,e);
        
        merge(arr,s,mid,e);
    }
}


int main()
{
    vector<int> arr = {32,43,1,6,3,89,76};
    sort1(arr,0,arr.size()-1);

    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}