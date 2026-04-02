#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr={1,2,3,4,5,1};
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
           int indx = (i+j)%n;
           cout<<arr[indx]<<" ";
        }
        cout<<endl;
    }
}