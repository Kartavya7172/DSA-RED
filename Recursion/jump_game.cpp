//Leetcode:-55
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    bool solve(vector<int>& nums,int index)
    {
        if(index == nums.size()-1) return true;
        if(index>=nums.size()) return false;
        if(nums[index] == 0) return false;

        bool reans = false;
        for(int jump =1;jump<=nums[index];jump++)
        {
            reans = reans||solve(nums,index+jump);
        }
        return reans;
    }
      bool canJump(vector<int>& nums) {
        return solve(nums,0);
    }
};
int main()
{
    Solution obj;
    vector<int>arr = {2,3,1,1,4};
    bool ans1 = obj.canJump(arr);
    cout<<ans1<<endl; 

    return 0;
}


