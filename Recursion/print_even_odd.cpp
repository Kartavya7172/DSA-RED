#include<iostream>
#include<vector>
using namespace std;
void find_even(vector<int>e,int size,int idx)
{
    if(idx >= size)
    {
        return;
    }
    if( (e[idx]&1) == 0)
    {
        cout<<e[idx]<<" ";
    }
    find_even(e,size,idx+1);
}
void find_odd(vector<int>e,int size,int idx)
{
    if(idx >= size)
    {
        return;
    }
    if( (e[idx]&1) == 1)
    {
        cout<<e[idx]<<" ";
    }
    find_odd(e,size,idx+1);
}


int main()
{
    vector<int>arr = {1,2,3,45,5,2,12};
    int n = arr.size();
    int index =0;
    find_even(arr,n,index);
    cout<<endl;
    find_odd(arr,n,index);
    return 0;
}