#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int startingrow = 0;
            int startingcol = 0;
    
            int row = matrix.size();
            int col = matrix[0].size();
    
            int endingcol = col-1;
            int endingrow = row-1;
    
            vector<int>ans;
            //logic->loop->if there are any pending elelment to print
            while(startingrow<=endingrow && startingcol<=endingcol)
           { //steps:-print starting row and startingrow++;
            for(int col=startingcol;col<=endingcol;col++)
            {
                ans.push_back(matrix[startingrow][col]);
            }
              startingrow++;
            //print endingcol and endingcol--;
            for(int row=startingrow;row<=endingrow;row++)
            {
                ans.push_back(matrix[row][endingcol]);
            }
            endingcol--;
            if(startingrow<=endingrow)//extra condtion to check for the the row when there is only one roe
           { //print endingrow and endingrow--;
               for(int col=endingcol;col>=startingcol;col--)
               {
                ans.push_back(matrix[endingrow][col]);
               }
            endingrow--;
           }
           if(startingcol<=endingcol)//extra condtion to check when there is only one column
           { 
            //print startingcol and startingcol++;
            for(int row=endingrow;row>=startingrow;row--)
            {
                ans.push_back(matrix[row][startingcol]);
            }
            startingcol++;
           }
           }
            return ans;
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
    vector<int>ans;
    ans=obj.spiralOrder(arr);
 
        for(int i=0;i<ans.size();i++)
        {
           cout<<ans[i];
        }
        cout<<endl;
    

}