#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
      int findPivotIndex(vector<int> &nums) {
    
        int s = 0;
        int e = nums.size() - 1;
        int n = nums.size();
    
        while (s <= e) {
          int mid = s + (e - s) / 2;
    
          if (nums[mid] > nums[mid + 1] && mid + 1 < n) {
            int ans = mid;
            return ans;
          }
          if (nums[mid] < nums[0]) {
            e = mid - 1;
          } else {
            s = mid + 1;
          }
        }
        return -1;
      }
    };
int main()
{
    vector<int>arr = {50,60,70,10,20,30};
    Solution obj;
    int index = obj.findPivotIndex(arr);
    cout<<index<<endl;

    return 0;
}