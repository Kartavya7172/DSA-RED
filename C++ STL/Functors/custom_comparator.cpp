#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class customcmp{
    public:
    bool operator()(int a,int b)
    {
        return a>b;
    }
};

int main()
{
    vector<int> arr = {2,1,65,243,3};
    sort(arr.begin(),arr.end(),customcmp());
    for(int a:arr)
    {
        cout<<a<<" ";
    }
}