#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int solve(int n,int k)
    {
        if(n == 1)
        {
            return k;
        }
        if(n == 2)
        {
            return k+k*(k-1);
        }
        
        int ans = (k-1)*(solve(n-1,k)+solve(n-2,k));
        return ans;
    }
    int countWays(int n, int k) {
        // code here
        return solve(n,k);
    }
};
int main()
{
    Solution obj;
    int ans = obj.countWays(3,3);
    cout<<ans<<endl;

    return 0;
}