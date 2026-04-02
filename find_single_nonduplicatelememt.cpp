#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
      int singleNonDuplicate(vector<int> &arr) {
        // Implement function with binary search logic
        int n = arr.size();
        int s = 0;
        int e = n - 1;
    
        while (s <= e) {
          if (s == e) {
            return arr[s];
          }
          int mid = (s + e) / 2;
    
          int currentvalue = arr[mid];
    
          int leftvalue = -1;
          if (mid - 1 >= 0) {
            leftvalue = arr[mid - 1];
          }
          int rightvalue = -1;
          if (mid + 1 < n) {
            rightvalue = arr[mid + 1];
          }
    
          if (currentvalue != leftvalue && currentvalue != rightvalue) {
            return currentvalue;
          }
    
          if (currentvalue == leftvalue && currentvalue != rightvalue) {
            // iska matlab pair ka starting index left value ka index hai
            // left value ka index = mid-1;
            // agar me ans ke left me ho to staring index of pair even hoga
            // agar me ans ke right me ho to starting index of pair odd hoga
            int pairstartingindex = mid - 1;
            if (pairstartingindex & 1) {
              // odd case:-iska matlab me ans ke right me ho to mujhe left me jana
              // padega
              e = mid - 1;
            } else {
              s = mid + 1;
            }
          }
    
          if (currentvalue != leftvalue && currentvalue == rightvalue) {
            int pairstartingindex = mid;
            if (pairstartingindex & 1) {
              e = mid - 1;
            } else {
              s = mid + 1;
            }
          }
        }
      }
    };

int main()
{
    Solution obj;
    vector<int>arr = {1,1,2,2,4,5,5,6,6};
    int ans = obj.singleNonDuplicate(arr);
    cout<<ans<<endl;

    return 0;
}