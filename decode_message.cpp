#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:
     void createmapping(unordered_map<char,char> &mapping,string key)
     {
        char start = 'a';
        for(int i=0;i<key.length();i++)
        {
            char current = key[i];
         if(mapping.find(current) == mapping.end())
             {  
              mapping[current] = start;
              start++;
             }
        }
     }
     string usemapping(unordered_map<char,char> &mapping,string message)
     {
        string ans1 = "";
        for(int i=0;i<message.length();i++)
        {
            char ch1 = mapping[message[i]];
            ans1.push_back(ch1);
        }
        return ans1;
     }
    string decodeMessage(string key, string message) {
        unordered_map<char,char> mapping;
        char ch = ' ';
        mapping[ch] = ch;

        createmapping(mapping,key);

        string ans = usemapping(mapping,message);
        return ans;
    }
};
int main()
{
    Solution obj;
    string finalans = obj.decodeMessage("the quick brown fox jumps over the lazy dog","vkbs bs t suepuv");
    cout<<finalans<<endl;
}