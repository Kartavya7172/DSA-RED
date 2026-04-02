#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
    //   int firstocc(vector<int> arr, int tar) {
    
    //     int s = 0;
    //     int e = arr.size() - 1;
    //     int ans = -1;
    
    //     while (s <= e) {
    //       int mid = s + (e - s) / 2;
    
    //       if (arr[mid] == tar) {
    //         ans = mid;
    //         e = mid - 1;
    //       }
    //       if (arr[mid] > tar) {
    //         e = mid - 1;
    //       } else if (arr[mid] < tar) {
    //         s = mid + 1;
    //       }
    //     }
    //     return ans;
    //   }
    //   int lasttocc(vector<int> arr, int tar) {
    
    //     int s = 0;
    //     int e = arr.size() - 1;
    //     int ans = -1;
    
    //     while (s <= e) {
    //       int mid = s + (e - s) / 2;
    
    //       if (arr[mid] == tar) {
    //         ans = mid;
    //         s = mid + 1;
    //       }
    //       if (arr[mid] > tar) {
    //         e = mid - 1;
    //       } else if (arr[mid] < tar) {
    //         s = mid + 1;
    //       }
    //     }
    //     return ans;
    //   }
    //   vector<int> searchRange(vector<int> &nums, int target) {
    //     int fo = firstocc(nums, target);
    //     int lo = lasttocc(nums, target);
    //     vector<int> ans;
    //     ans.push_back(fo);
    //     ans.push_back(lo);
    
    //     return ans;
    //   }
    vector<int>searchRange(vector<int> arr , int target)
    {
        vector<int>ans;
        auto lb = lower_bound(arr.begin(),arr.end(),target);
        ans.push_back(lb-arr.begin());
        
        auto ub = upper_bound(arr.begin(),arr.end(),target);
        ans.push_back(ub-arr.begin()-1);
        return ans;
    }
    };
int main()
{
    Solution obj;
    vector<int> arr = {1,2,2,2,2,2,4,5};
    vector<int> ans = obj.searchRange(arr,2);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}