#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
        unordered_map<char,int> count;

        for(int i=0;i<s.length();i++)
        {
            char ch = s[i];
            count[ch]++;
        }

        for(int i=0;i<t.length();i++)
        {
            char ch = t[i];
            count[ch]--;
        }

        for(char ch = 'a';ch<='z';ch++)
        {
            if(count[ch] != 0)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    Solution obj;
    string s1="";
    cin>>s1;
    string s2 = "";
    cin>>s2;

    bool ans = obj.isAnagram(s1,s2);
    if(ans)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

}