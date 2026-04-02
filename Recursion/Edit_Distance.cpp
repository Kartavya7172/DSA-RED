#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(string& w1,string& w2,int i,int j)
    {
        if(i>=w1.size())
        {
            return w2.size()-j;
        }
        if(j>=w2.size())
        {
            return w1.size()-i;
        }
        int ans = 0;
        char wch1 = w1[i];
        char wch2 = w2[j];

        if(wch1 == wch2)
        {
            ans = solve(w1,w2,i+1,j+1);
        }
        else
        {
            //insert
            int option1 = 1+solve(w1,w2,i,j+1);
            //remove
            int option2 = 1+solve(w1,w2,i+1,j);
            //replace
            int option3 = 1+solve(w1,w2,i+1,j+1);

             ans =  min(option1,min(option2,option3));

        }
        return ans;
    }
    int minDistance(string word1, string word2) {
        int i=0,j=0;
        return solve(word1,word2,i,j);
    }
};
int main()
{
   Solution obj;
   int ans  = obj.minDistance("horse","ros");
   cout<<ans;

   return 0;
}