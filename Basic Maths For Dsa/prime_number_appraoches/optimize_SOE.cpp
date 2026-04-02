#include<iostream>
#include<vector>
using namespace std;

vector<int> prime(int n)
{
    vector<bool>primeno(n + 1, true); // use n+1 to include n
    primeno[0] = primeno[1] = false;

    for(int i = 2; i  <= n; i++)
    {
        if(primeno[i])
        {
            for(int j = i * i; j <= n; j += i)
            {
                primeno[j] = false;
            }
        }
    }

    vector<int>ans;
    for(int i = 2; i <= n; i++)
    {
        if(primeno[i])
            ans.push_back(i);
    }

    return ans;
}

int main()
{
    vector<int>ans1 = prime(10);
    for(int i : ans1)
    {
        cout << i << " ";
    }
    return 0;
}
