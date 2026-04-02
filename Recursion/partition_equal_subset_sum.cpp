#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool ans(vector<int>&nums,int i,int t)
    {
        if(t == 0) return true;
        if(i==nums.size())return false;
        if(t<0) return false;

        bool inc = ans(nums,i+1,t-nums[i]);
        bool exc = ans(nums,i+1,t);

        return inc||exc;
    }
    bool canPartition(vector<int>& nums) {
        int index = 0;
        int sum = accumulate(nums.begin(),nums.end(),0);
        int target = sum/2;

        if(sum %2 != 0) return false;
        bool ans1 = ans(nums,index,target);
        return ans1;
    }
};
int main()
{
  Solution obj;
  vector<int>brr = {1,5,11,5};
  int index = 0;
  int sum =0;
  bool ans = obj.canPartition(brr);
  if(ans)
  {
    cout<<"true"<<endl;
  }
  else
  {
    cout<<"false"<<endl;
  }
}