#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>arr;

    arr.push_back(2);
    arr.push_back(11);
    arr.push_back(22);
    arr.push_back(0);
    arr.push_back(1);
    
    //max and min
    int a = 10;
    int b = 11;

    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl; 

    //min_element
    auto it = min_element(arr.begin(),arr.end());
    cout<<*it<<endl;
    
    //max_element
    auto it1 = max_element(arr.begin(),arr.end());
    cout<<*it1<<endl;
}