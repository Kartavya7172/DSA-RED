#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0;
        int e = nums.size()-1;

            int mid = s+(e-s)/2;
        while(s<e)
        {

            if(mid%2 == 1)mid--;
            if(nums[mid] == nums[mid+1])
            {
                s=mid+2;
            }
            else
            {
                e=mid;
            }
            mid = s+(e-s)/2;
        }
        return nums[s];
    }
};
int main()
{
    Solution obj;
    vector<int>num = {1,1,2,3,3,4,4,5,5};
    int ans = obj.singleNonDuplicate(num);
    cout<<ans<<endl;    
}