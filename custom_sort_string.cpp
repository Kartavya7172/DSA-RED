#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string ordercopy;
class Solution {
public:
    static bool cmp(char ch1,char ch2)
    {
        return(ordercopy.find(ch1)<ordercopy.find(ch2));
    }
    string customSortString(string order, string s) {
        ordercopy = order;
        sort(s.begin(),s.end(),cmp);

        return s;
    }
};

int main()
{
    Solution obj;
    string ans = obj.customSortString("rat","kartavya");
    cout<<ans<<endl;
}