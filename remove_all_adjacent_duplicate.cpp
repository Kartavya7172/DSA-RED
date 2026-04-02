#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        int length = s.length();
        string ans = "";
        for(int i=0;i<length;i++)
        {
            char ch = s[i];
            if(ans.empty())
            {
                ans.push_back(ch);
            }
            else if(ch != ans.back())
            {
                ans.push_back(ch);
            }
            else
            {
                ans.pop_back();
            }
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    string ans1 = obj.removeDuplicates("aabbaba");
    cout<<ans1<<endl;

    return 0;
}