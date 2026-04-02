#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        int ans = 0;
        if(n == 0) return 0;
        vector<bool> prime(n,true);
        prime[0] = prime[1] = false;

        for(int i =2;i<n;i++)
        {
            if(prime[i])
            {
                ans++;

                int j = i*2;
                while(j<n)
                {
                    prime[j] = false;
                    j+=i;
                }
            }
        }
        return ans;
    }

};
int main()
{
    Solution obj;
    int ans = obj.countPrimes(10);
    cout<<ans<<endl;

    return 0;
}