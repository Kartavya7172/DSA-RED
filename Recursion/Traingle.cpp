#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int solve(vector<vector<int>>& triangle,int row,int col)
    {
        if(row == triangle.size()-1)
        {
            return triangle[row][col];
        }
        int down = triangle[row][col]+solve(triangle,row+1,col);
        int plus = triangle[row][col]+solve(triangle,row+1,col+1);

        return min(down,plus);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        return solve(triangle,0,0);
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>arr = {{2},{3,4},{6,5,7},{4,1,8,3}};
    int ans = obj.minimumTotal(arr);
    cout<<ans<<endl;
    return 0;
}