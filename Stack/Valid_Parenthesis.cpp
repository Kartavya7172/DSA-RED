#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            // Opening brackets
            if (ch == '[' || ch == '{' || ch == '(') {
                st.push(ch);
            }
            // Closing brackets
            else {
                if (st.empty()) {
                    return false;
                }
                else if (ch == ']' && st.top() != '[') {
                    return false;
                }
                else if (ch == ')' && st.top() != '(') {
                    return false;
                }
                else if (ch == '}' && st.top() != '{') {
                    return false;
                }
                else {
                    st.pop();
                }
            }
        }

        return st.empty();
    }
};

int main() {
    Solution obj;

    string s;

    cout << "Enter the string containing brackets: ";
    cin >> s;

    if (obj.isValid(s)) {
        cout << "Valid Parentheses" << endl;
    }
    else {
        cout << "Invalid Parentheses" << endl;
    }

    return 0;
}