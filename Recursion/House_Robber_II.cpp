#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(vector<int>&nums,int i,int j)
    {
        if(i>j)
        {
            return 0;
        }
        int ans1 = nums[i]+solve(nums,i+2,j);
        int ans2 = 0+solve(nums,i+1,j);

        return max(ans1,ans2);

    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(nums.size() == 1)
        {
            return nums[0];
        }
        int option1 = solve(nums,0,n-2);
        int option2 = solve(nums,1,n-1);

        return max(option1,option2);
    }
};
int main()
{
    Solution obj;
    vector<int>arr = {1,2,3,1};
    int ans = obj.rob(arr);
    cout<<ans<<endl;

    return 0;
}