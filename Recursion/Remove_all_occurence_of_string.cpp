#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution {
public:
    void removeOccurrences1(string &s,string p)
    {
        if(s.length()<0 || s.find(p)>=s.length())
        {
         return;
        }
         int n = s.find(p);
        s.erase(n,p.length());
        removeOccurrences1(s,p);
        return ;
    }
    string removeOccurrences(string s, string part) {
        // Logic to be implemented by the user
        
        removeOccurrences1(s,part);
        return s;
    }
};
int main()
{
  Solution obj;
  string ans = obj.removeOccurrences("daabcbaabcbc","abc");
  cout<<ans<<endl;
}