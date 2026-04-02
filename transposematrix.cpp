#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    
            int originalmatrixrow = matrix.size();
            int originalmatrixcol = matrix[0].size();
    
            int transposerow = originalmatrixcol;
            int transposecol = originalmatrixrow;
    
            vector<vector<int>>transpose(transposerow,vector<int>(transposecol,0));
            for(int i=0;i<transposerow;i++)
            {
                for(int j=0;j<transposecol;j++)
                {
                    transpose[i][j] = matrix[j][i];
                }
            }
            return transpose;
        }
    };

int main()
{
    Solution obj;
    vector<vector<int>>arr(3,vector<int>(3));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>ans(3,vector<int>(3));
    ans=  obj.transpose(arr);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<ans[i][j];
        }
        cout<<endl;
    }

}