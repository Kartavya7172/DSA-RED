#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n = matrix.size();
            //step1:Transpose
            for(int i=0;i<n;i++)
            {
                for(int j=i;j<n;j++)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
    
            //step2:Row Wise Reverse
            for(int i=0;i<n;i++)
            {
                reverse(matrix[i].begin(),matrix[i].end());
            }
        }
    };
int main()
{
    Solution obj;
    vector<vector<int>>arr = {{1,2,3},
                              {4,5,6},
                              {7,8,9}};
    obj.rotate(arr);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}