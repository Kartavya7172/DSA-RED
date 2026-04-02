#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

    //binary_search
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(40);
    arr.push_back(50);

    bool ans = binary_search(arr.begin(),arr.end(),11);
    cout<<ans<<endl;
    
    //lower_bound
    auto it = lower_bound(arr.begin(),arr.end(),35);
    cout<<*it<<endl;

    //upper_bound
    auto it1 = upper_bound(arr.begin(),arr.end(),20);
    cout<<*it1<<endl;

    //equal_search
    auto it3 = equal_range(arr.begin(),arr.end(),10);
    cout<<distance(arr.begin(),it3.first)<<endl;
     cout<<distance(arr.begin(),it3.second);
}