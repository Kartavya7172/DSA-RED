//Leetcode:-55
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    void solve(vector<int>&nums,int i,int &ans,int step)
    {
        if(i == nums.size()-1)
        {
            ans = min(ans,step);
            return;
        }
        if(i>=nums.size()) return;

        for(int jump = 1;jump<=nums[i];jump++)
        {
            solve(nums,i+jump,ans,step+1);
        }
    }
    int jump(vector<int>& nums) {
        int ans = INT_MAX;
        solve(nums,0,ans,0);
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>arr = {2,3,1,1,4};
    int ans = INT_MAX;
   int sol =  obj.jump(arr);
    cout<<sol<<endl; 

    return 0;
}


