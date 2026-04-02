#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        pair<int, int> sumPositiveNegative(const vector<int>& arr) {
            // Implement logic to calculate sums of positive and negative elements
            int psum=0,nsum =0;
            for(int i=0;i<arr.size();i++)
            {
                if(arr[i]<0)
                {
                    nsum = nsum+arr[i];
                }
                else
                {
                    psum = psum+arr[i];
                }
            }
            return {psum,nsum};
        }
    };
int main()
{
    Solution obj;
    vector<int>arr = {1,-2,40,-3,-3,3,-4,4};
    pair<int,int> p=obj.sumPositiveNegative(arr);
    cout<<p.first<<" "<<p.second;

}