#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int diagonalSum(vector<vector<int>>& mat) {
            int sum = 0;
            int n = mat.size();
            //step1:-D1 sum
            for(int i=0;i<n;i++)
            {
                sum = sum+mat[i][i];
            }
            //step2:-D2 sum
            for(int i=0;i<n;i++)
            {
                sum = sum+mat[i][n-i-1];
            }
            //step3:-return sum
            if(n&1 == 1)
            {
                sum = sum-mat[n/2][n/2];
            }
            return sum;
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
   int sum =  obj.diagonalSum(arr);
   cout<<sum<<endl;

   return 0;
}