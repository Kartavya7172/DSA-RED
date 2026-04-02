#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    string normalise(string str)
    {
        unordered_map<char,char> mapping;
        char start = 'a';
        for(int i=0;i<str.length();i++)
        {
            char ch = str[i];
            if(mapping.find(ch) == mapping.end())
            {
                mapping[ch] = start;
                start++;
            }
        }
        string ansstring = "";
        for(int i=0;i<str.length();i++)
        {
            char ch = str[i];
            char mapcharacter = mapping[ch];
            ansstring.push_back(mapcharacter);
        }
        return ansstring;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
       string ans1 =  normalise(pattern);

        for(int i=0;i<words.size();i++)
        {
            string currentword = words[i];
            string ans2 = normalise(currentword);

            if(ans1 == ans2)
            {
                ans.push_back(currentword);
            }
        }
         return ans;
    }
};
int main()
{
     Solution obj;
     vector<string> word = {"abc","deq","mee","aqq","dkd","ccc"};
     string pattern = "abb";
     vector<string> result1 = obj.findAndReplacePattern(word,pattern);

     for(int i=0;i<result1.size();i++)
     {
        cout<<result1[i]<<endl;
     }
}