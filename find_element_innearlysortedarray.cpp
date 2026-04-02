#include<iostream>
#include<vector>
using namespace std;
int findElementInNearlySortedArray(const vector<int>& arr, int k) {
    int n = arr.size();
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        int mid = (s+e)/2;
       
        //as it is the almost soretd array
        //element can be found at mis,mid-1,mid+1;
        
        if(arr[mid] == k)
        {
            return mid;
        }
        if(arr[mid-1] == k)
        {
            return mid-1;
        }
        if(arr[mid+1] == k)
        {
            return mid+1; 
        }
        if(k>arr[mid])
        {
            s = mid+2;//because mid+1 is alraedy check
        }
        else
        {
            e = mid-2;//because mid-1 is alraedy check
        }
    }
    return -1; // Placeholder return
}

int main()
{
    vector<int>arr = {3,5,10,9,11};
    int index = findElementInNearlySortedArray(arr,9);
    cout<<index;
}