//Leetcode 921
//My approach
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                // Opening bracket -> push
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                // If matching '(' is available, remove the pair
                if(!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    // Unmatched ')' -> push it
                    st.push(s[i]);
                }
            }
        }

        // Remaining brackets need to be added
        return st.size();
    }
};

int main()
{
    Solution obj;

    string s;

    cout << "Enter parentheses string: ";
    cin >> s;

    int ans = obj.minAddToMakeValid(s);

    cout << "Minimum additions required: " << ans << endl;

    return 0;
}

//2nd approach
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        int unmatchopen = 0;
        int unmatchclose = 0;

        int n = s.size();

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                unmatchopen++;
            }
            else
            {
                if(unmatchopen > 0)
                {
                    // Match ')' with previous '('
                    unmatchopen--;
                }
                else
                {
                    // No '(' available
                    unmatchclose++;
                }
            }
        }

        return unmatchopen + unmatchclose;
    }
};

int main()
{
    Solution obj;

    string s;

    cout << "Enter parentheses string: ";
    cin >> s;

    int ans = obj.minAddToMakeValid(s);

    cout << "Minimum additions required: " << ans << endl;

    return 0;
}