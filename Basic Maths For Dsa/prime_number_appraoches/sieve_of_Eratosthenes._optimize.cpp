#include<iostream>
#include<vector>
using namespace std;

vector<int> prime(int n)
{
    vector<bool>primeno(n,true);
    primeno[0] = primeno[1] = false;
    vector<int>ans;
    for(int i=2;i<=n;i++)
    {
        if(primeno[i])
        {
            ans.push_back(i);
                        int j = i*i;
            while(j<=n)
            {
                primeno[j] = false;
                j=j+i;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int>ans1 = prime(10);
    for(int i:ans1)
    {
        cout<<i<<" ";
    }
   return 0;
}