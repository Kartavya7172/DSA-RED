#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    
    int checkplalindrome(string s,int i,int j)
    {
        int count =0;
        while(i>=0 && j<s.length() && s[i] == s[j])
        {
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count =0;
        for(int centre=0;centre<s.length();centre++)
        {   

            int i=centre;
            int j = centre+1;
            int evencount = checkplalindrome(s,i,j);

            i = centre;
            j = centre;
            int oddcount = checkplalindrome(s,i,j);

            count = count +evencount+oddcount;
        }
        return count;
    }
};
int main()
{
    Solution obj;
    int count = obj.countSubstrings("abaaaba");
    cout<<count<<endl;

    return 0;

}