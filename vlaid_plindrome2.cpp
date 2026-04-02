#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    bool checkplaindrome(string s,int i, int j)
    {
        while(i<j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
      return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;

        while(i<=j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                bool ans1 = checkplaindrome(s,i,j-1);
                bool ans2 = checkplaindrome(s,i+1,j);
                bool ans = ans1||ans2;
                return ans;
            }
        }
       return true;
    }
};

int main()
{
    Solution obj;
    bool ans = obj.validPalindrome("aabaaba");
    cout<<ans<<endl;

    return 0;
}