#include<iostream>
#include<vector>
using namespace std;
int binarySearch(const vector<int> &arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
  
    while (start <= end) {
      int mid = (start + end) / 2;
  
      if (arr[mid] == target) {
        return mid;
      }
      if (target < arr[mid]) {
        end = mid - 1;
      } else if (target > arr[mid]) {
        start = mid + 1;
      }
    }
    // add your logic here
    return -1; // placeholder
  }
int main()
{
    vector<int>arr = {1,2,3,4,5,6};
    int ans = binarySearch(arr,6);
    cout<<ans<<endl;
}