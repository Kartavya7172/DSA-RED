#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int countMinReversals(string s) {
        
        // Odd length can never be balanced
        if (s.size() & 1)
            return -1;

        int ans = 0;
        stack<char> st;

        // Remove already balanced pairs
        for (char c : s)
        {
            if (c == '{')
            {
                st.push(c);
            }
            else
            {
                if (!st.empty() && st.top() == '{')
                {
                    // "{}" is already balanced
                    st.pop();
                }
                else
                {
                    // Unmatched '}'
                    st.push(c);
                }
            }
        }

        // Process remaining unmatched brackets in pairs
        while (!st.empty())
        {
            char a = st.top();
            st.pop();

            char b = st.top();
            st.pop();

            if (a == b)
            {
                // "{{" or "}}"
                // One reversal is enough
                ans = ans + 1;
            }
            else
            {
                // "}{" 
                // Two reversals are required
                ans = ans + 2;
            }
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    string s;

    cout << "Enter bracket string: ";
    cin >> s;

    int ans = obj.countMinReversals(s);

    cout << "Minimum reversals required: " << ans << endl;

    return 0;
}