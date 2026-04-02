#include<iostream>
using namespace std;

int uniqueelement(int arr[],int size)
{
    int ans = 0;

    for(int i=0;i<size;i++)
    {
        ans = ans^arr[i];
    }

    return ans;
}

int main()
{
    int arr[5] = {2,1,4,2,1};
    int uniqueelemt = uniqueelement(arr,5);
    cout<<uniqueelemt<<endl;
}