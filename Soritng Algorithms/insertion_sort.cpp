#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;

    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);

    for(int i=1;i<arr.size();i++)
    {
        int j=i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int a:arr)
    {
        cout<<a<<" ";
    }
}