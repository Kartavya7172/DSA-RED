#include<iostream>
#include<vector>
using namespace std;

pair<int,int> countzeroandone(vector<int>& arr)
{
    int n = arr.size();
    int zero=0,one=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
            zero++;
        else 
            one++;
    }
   
    return {zero,one};

}


int main()
{
    vector<int>arr = {1,0,1,0,1,1};
    pair<int,int>result = countzeroandone(arr);
    cout<<result.first<<result.second<<endl;
}