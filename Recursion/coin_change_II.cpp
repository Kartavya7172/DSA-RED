#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int solve(int amount,int index,vector<int>&coins)
    {
        if(amount == 0)
        {
            return 1;
        }
        if(index>=coins.size())
        {
            return 0;
        }
        int includekanas = 0;
        if(coins[index]<=amount)
        {
            includekanas = solve(amount-coins[index],index,coins);
        }
        int excludekaans = solve(amount,index+1,coins);

        int total = includekanas+excludekaans;
        return total;
    }
    int change(int amount, vector<int>& coins){
    int index =0;
    int ans = solve(amount,index,coins);
    return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>coins1 = {1,2,5};
    int ans1 = obj.change(5,coins1);
    cout<<ans1<<endl;
}