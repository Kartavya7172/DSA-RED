#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(21);
    arr.push_back(42);
    arr.push_back(92);
    arr.push_back(67);

    for(int i=0;i<arr.size()-1;i++)
    {
        int min = i;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
    
    for(int i:arr)
    {
        cout<<i<<" ";
    }
}
