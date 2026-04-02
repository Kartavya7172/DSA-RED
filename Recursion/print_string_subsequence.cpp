#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
 void find_subsequnce(string s1,int i,string op,vector<string>&ans1)
 {
        if(i >=s1.length())
        {
           if(!op.empty()) 
            ans1.push_back(op);
            return;
        }
        char ch = s1[i];
        op.push_back(ch);
        find_subsequnce(s1,i+1,op,ans1);
        op.pop_back();
        find_subsequnce(s1,i+1,op,ans1);
 }
    vector<string> generateAllSubsequences(string s) {
     vector<string>ans;
     
     string output ="";
     int index = 0;

     find_subsequnce(s,index,output,ans);
     sort(ans.begin(),ans.end());
     return ans;
    }
};
int main()
{
    Solution obj;
    string k = "abc";
    vector<string>finalans = obj.generateAllSubsequences(k);
    for(auto it:finalans)
    {
        cout<<it<<endl;
    }
}