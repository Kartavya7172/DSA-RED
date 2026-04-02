#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    bool isprime(int n)
    {
        if(n<=1) return false;
        int sqrt1= sqrt(n);
        for(int i=2;i<=sqrt1;i++)
        {
            if(n%i == 0)
            {
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        int count =0;
        for(int i =2;i<n;i++)
        {
            if(isprime(i))
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution obj;
    int ans = obj.countPrimes(10);
    cout<<ans<<endl;

    return 0;
}