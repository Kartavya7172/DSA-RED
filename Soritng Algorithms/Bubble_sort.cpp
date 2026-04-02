#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(91);
    arr.push_back(56);
    arr.push_back(43);
    arr.push_back(74);
    
    for(int i=0;i<arr.size()-1;i++)
    {
        for(int j=0;j<arr.size()-i-1;j++)
        {
            if(arr[j]<arr[j+1])
              swap(arr[j],arr[j+1]);
        }
    }
    for(int a:arr)
    {
        cout<<a<<" ";
    }
}