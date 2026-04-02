#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
int find_cost(vector<int>arr,int i)
{
    if(i>=arr.size())
    {
        return 0;
    }
    int include = arr[i]+find_cost(arr,i+2);
    int exclude = find_cost(arr,i+1);

    int finalans = max(include,exclude);
    return finalans;
}
    int rob(vector<int>& nums) {
        int cost = 0;
        int index =0;
        cost = find_cost(nums,index);
        return cost;
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