#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> nextSmallerEle(vector<int>& arr) {

        stack<int> st;
        vector<int> ans;
        int n = arr.size();

        // Sentinel value
        st.push(-1);

        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {

            // Remove all greater or equal elements
            while (st.top() != -1 && st.top() >= arr[i]) {
                st.pop();
            }

            // Top is next smaller element
            ans.push_back(st.top());

            // Push current element
            st.push(arr[i]);
        }

        // Reverse because answers were collected from right to left
        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;

    vector<int> ans = obj.nextSmallerEle(arr);

    cout << "\nNext Smaller Elements:\n";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}