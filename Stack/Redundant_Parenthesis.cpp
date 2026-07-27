#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool checkRedundancy(string &s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(' || s[i] == '+' || s[i] == '-' ||
                s[i] == '*' || s[i] == '/') {

                st.push(s[i]);
            }
            else if (s[i] == ')') {

                bool operatorFound = false;

                while (!st.empty() && st.top() != '(') {

                    if (st.top() == '+' || st.top() == '-' ||
                        st.top() == '*' || st.top() == '/') {

                        operatorFound = true;
                    }

                    st.pop();
                }

                if (operatorFound == false) {
                    return true;
                }
                else {
                    st.pop();   // Remove '('
                }
            }
        }

        return false;
    }
};

int main() {
    Solution obj;

    string s;

    cout << "Enter the expression: ";
    cin >> s;

    if (obj.checkRedundancy(s)) {
        cout << "Redundant Parentheses Found" << endl;
    }
    else {
        cout << "No Redundant Parentheses" << endl;
    }

    return 0;
}