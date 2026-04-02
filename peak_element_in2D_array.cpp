#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class Solution {
public:
    int  Findrowindex(vector<vector<int>>arr,int r,int c,int j)
    {
        int max = INT_MIN;
        int index = -1;
        for(int i=0;i<r;++i)
        {
            if(arr[i][j] >= max)
            {
                max = arr[i][j];
                index = i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int col = mat[0].size();
        int row = n;
        int s= 0;
        int e = col-1;
        while(s<=e)
        {
               int mid = (s+e)/2;
               int maxrowindex = Findrowindex(mat,row,col,mid);

               int left = mid-1>=0 ?mat[maxrowindex][mid-1]:INT_MIN;
               int right = mid+1<col ?mat[maxrowindex][mid+1]:INT_MIN;

               if(mat[maxrowindex][mid]>left && mat[maxrowindex][mid]>right)
               {
                  return{maxrowindex,mid};se
               }
               else if(mat[maxrowindex][mid]<left)
               {
                 e = mid-1;
               }
               else
               {
                s = mid+1;
               }
        }
        return{};
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>brr={{10,20,30},{21,30,14},{7,16,32}};


    vector<int>ans;
    ans =obj.findPeakGrid(brr);
   
    cout<<ans[0]<<" "<<ans[1]<<endl;
     return 0;
}