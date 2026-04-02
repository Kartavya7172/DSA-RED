#include<iostream>
#include<vector>
using namespace std;

// User function Template for C++

class Solution {
  public:
    int solve(int n)
    {
        if(n == 1)
        {
            return 0;
        }
        if(n == 2)
        {
            return 1;
        }
        
        int ans = (n-1)*(solve(n-1)+solve(n-2));
        return ans;
    }
    int countDer(int n) {
        return solve(n);
    }
};
int main()
{
    int n = 4;
    Solution obj;
    int ans = obj.countDer(n);
    cout<<ans<<endl;

    return 0;
}