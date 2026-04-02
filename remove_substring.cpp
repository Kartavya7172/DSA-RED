#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        // Logic to be implemented by the user
        while(s.find(part) != -1)
        {
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};
int main()
{
    Solution obj;
    string s = "aabbaa";
    string p = "aa";
    string ans = obj.removeOccurrences(s,p);
    cout<<ans<<endl;
}