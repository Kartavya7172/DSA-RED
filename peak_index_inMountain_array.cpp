#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr) {

    int n = arr.size();
    int s = 0;
    int e = n - 1;
  
    int ans = -1;
    while (s <= e) {
      int mid = (s + e) / 2;
  
      // find in the first line
      if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) {
        return mid;
      }
      if (arr[mid] < arr[mid + 1]) {
        s = mid + 1;
      } else {
        e = mid;
      }
    }
  
    return 0;
  }
int main()
{
    vector<int>arr = {2,4,6,8,5,3,1};
    int ans = peakIndexInMountainArray(arr);
    cout<<arr[ans];
    return 0;
}