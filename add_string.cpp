#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        // User will implement the logic here
       int i = num1.length()-1;
       int j = num2.length()-1;
       int carry = 0;
       string ans = "";
       while(i>=0 || j>=0 || carry>0)
       {
           int currentsum =0;
           if(i>=0)
           {
             currentsum += num1[i]-'0';
             i--;
           }
           if(j>=0)
           {
             currentsum += num2[j]-'0';
             j--;
           }
           currentsum += carry;
           int digit = currentsum%10;
           ans.push_back(digit+'0');
           carry = currentsum/10;
            
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};

int main()
{
    Solution obj;
    string ans1 = obj.addStrings("123","123");
    cout<<ans1<<endl;

    return 0;
}