#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
  int findMode(const vector<int> &arr) {
    // Implement logic to find mode
    int maxfrequency = 1;
    int currentfreq = 1;
    vector<int> arr1 = arr;
    int mode = arr[0];
    sort(arr1.begin(), arr1.end());
    int n = arr.size();
    for (int i = 0; i < n; i++) {
      if (arr1[i] == arr1[i - 1]) {
        currentfreq++;
      } else {
        currentfreq = 1;
      }

      if (currentfreq > maxfrequency) {
        maxfrequency = currentfreq;
        mode = arr1[i];
      }
    }
    return mode;
  }
};

int main()
{
    Solution obj;
    vector<int>arr = {1,3,2,1,3,2,12,1};
    int p=obj.findMode(arr);
    cout<<p;

}