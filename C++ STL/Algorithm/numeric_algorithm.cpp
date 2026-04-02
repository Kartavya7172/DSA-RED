#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main()
{
    //accumlate
    vector<int>arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    int totalsum = accumulate(arr.begin(),arr.end(),0);
    cout<<totalsum<<endl;

    //inner_product
    vector<int>brr1(3);
    brr1[0] = 1;
    brr1[1] = 2;
    brr1[2] = 3;

    vector<int>brr2(3);
    brr2[0] = 4;
    brr2[1] = 5;
    brr2[2] = 6;
    int product = inner_product(brr1.begin(),brr1.end(),brr2.begin(),0);
    cout<<product<<endl;

    //partial sum
    vector<int>crr(6);
    crr[0] = 1;
    crr[1] = 2;
    crr[2] = 3;
    crr[3] = 4;
    crr[4] = 5;
    crr[5] = 6;
    vector<int>result(crr.size());
    
    partial_sum(crr.begin(),crr.end(),result.begin());
    for(int i:result)
    {
        cout<<i<<" "; 
    }
    cout<<endl; 
    //iota
    vector<int>first(5);
    iota(first.begin(),first.end(),250);

    for(int i:first)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}