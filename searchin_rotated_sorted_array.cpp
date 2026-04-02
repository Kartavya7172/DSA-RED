#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int findpivot(vector<int> nums) {
            int s = 0;
            int e = nums.size() - 1;
            int n = nums.size();
    
            while (s <= e) {
                int mid = s + (e - s) / 2;
                if (s == e) {
                    return mid;
                }
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
    
        int binarysearch(int start, int end, vector<int> brr, int tar) {
            int s = start;
            int e = end;
    
            while (s <= e) {
                int mid = s + (e - s) / 2;
                if (brr[mid] == tar) {
                    return mid;
                }
                if (brr[mid] > tar) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            }
            return -1;
        }
    
        int search(vector<int>& nums, int target) {
            int n = nums.size();
            int pivot = findpivot(nums);
            if (target >= nums[0] && target <= nums[pivot]) {
                int ans = binarysearch(0, pivot, nums, target);
                return ans;
            } else {
                int ans = binarysearch(pivot + 1, n - 1, nums, target);
                return ans;
            }
            return -1;
        }
    
    };
int main()
{
    Solution obj;
    vector<int>arr = {4,5,6,7,0,1,2};
    int ans = obj.search(arr,0);
    cout<<"Index of the element is:-"<<ans;

    return 0;
}