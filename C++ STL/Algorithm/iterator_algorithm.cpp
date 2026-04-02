#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printdouble(int a)
{
    cout<<2*a<<" ";
}
bool checkeven(int a)
{
    return a%2 == 0;
}
int main()
{
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 10;
    arr[4] = 53;
    
    //for_each
    for_each(arr.begin(),arr.end(),printdouble);
    cout<<endl;    

    //find
    auto it = find(arr.begin(),arr.end(),10);
    cout<<*it<<endl;

    //find_if
    vector<int>::iterator it1 = find_if(arr.begin(),arr.end(),checkeven);
    cout<<*it1<<endl;

    //count
    int a = count(arr.begin(),arr.end(),10);
    cout<<a<<endl;
    
    //count if
    int count1 = count_if(arr.begin(),arr.end(),checkeven);
    cout<<count1<<endl;

    //sort()
    sort(arr.begin(),arr.end());

    //reverse
    reverse(arr.begin(),arr.end());

    //right rotate;
    vector<int>brr(6);
    brr[0] = 10;
    brr[1] = 20;
    brr[2] = 30;
    brr[3] = 40;
    brr[4] = 50;
    brr[5] = 60;

    rotate(brr.begin(),brr.begin()+3,brr.end());
    for(int i:brr)
    {
        cout<<i<<" ";
    }
   cout<<endl;
    //unique
    vector<int>uni(6);
    uni[0] = 10;
    uni[1] = 10;
    uni[2] = 30;
    uni[3] = 44;
    uni[4] = 44;
    uni[5] = 60;
    auto it3 = unique(uni.begin(),uni.end());
    uni.erase(it3,uni.end());
    for(int i:uni)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //partition
    vector<int>par(6);
    par[0] = 10;
    par[1] = 12;
    par[2] = 33;
    par[3] = 42;
    par[4] = 41;
    par[5] = 60;

    auto it5 = partition(par.begin(),par.end(),checkeven);
    par.erase(it5,par.end());
    for(int q:par)
    {
        cout<<q<<" ";
    }
}  