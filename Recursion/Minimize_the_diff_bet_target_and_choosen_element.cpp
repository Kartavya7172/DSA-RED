//Leetcode:-1981
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int anssum(vector<vector<int>>& mat, int &target,int row,int sum)
    {
        int ans = INT_MAX;
        if(row == mat.size())
            return abs(target-sum);
        for(int col=0;col<mat[row].size();col++)
        {
            int reans = anssum(mat,target,row+1,sum+mat[row][col]);
            ans = min(ans,reans);
        }
        return ans;
    }
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        int row=0,sum =0;
        return anssum(mat,target,row,sum);
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>arr = {{1,2,3},
                              {4,5,6},
                              {7,8,9}};
    int ans1 = obj.minimizeTheDifference(arr,13);
    cout<<ans1<<endl; 

    return 0;
}


