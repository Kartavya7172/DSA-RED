#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:

    // Function to find the index of the Next Smaller Element
    void nextsmall(vector<int> arr, vector<int> &next)
    {
        stack<int> st;
        st.push(-1);   // Sentinel value

        int n = arr.size();

        // Traverse from right to left
        for(int i = n - 1; i >= 0; i--)
        {
            // Remove all elements greater than current element
            while(st.top() != -1 && arr[st.top()] > arr[i])
            {
                st.pop();
            }

            // Store index of next smaller element
            next.push_back(st.top());

            // Push current index
            st.push(i);
        }

        // Since we traversed from right to left, reverse the answer
        reverse(next.begin(), next.end());
    }

    // Function to find the index of the Previous Smaller Element
    void prevsmall(vector<int> arr, vector<int> &prev)
    {
        stack<int> st;
        st.push(-1);   // Sentinel value

        int n = arr.size();

        // Traverse from left to right
        for(int i = 0; i < n; i++)
        {
            // Remove greater and equal elements
            while(st.top() != -1 && arr[st.top()] >= arr[i])
            {
                st.pop();
            }

            // Store previous smaller index
            prev.push_back(st.top());

            // Push current index
            st.push(i);
        }
    }

    int sumSubarrayMins(vector<int>& arr)
    {
        vector<int> nextsmaller;
        vector<int> prevsmaller;

        // Find next smaller index
        nextsmall(arr, nextsmaller);

        // Find previous smaller index
        prevsmall(arr, prevsmaller);

        const int mod = 1e9 + 7;
        long long sum = 0;

        // Calculate contribution of every element
        for(int i = 0; i < arr.size(); i++)
        {
            // If no next smaller exists, consider array size
            if(nextsmaller[i] == -1)
                nextsmaller[i] = arr.size();

            // Number of choices on left side
            long long left = i - prevsmaller[i];

            // Number of choices on right side
            long long right = nextsmaller[i] - i;

            // Total number of subarrays where arr[i] is minimum
            long long no_of_times = (left * right) % mod;

            // Contribution of current element
            long long total = (no_of_times * arr[i]) % mod;

            // Add contribution
            sum = (sum + total) % mod;
        }

        return sum;
    }
};

int main()
{
    Solution obj;

    // Example input
    vector<int> arr = {3, 1, 2, 4};

    cout << "Array: ";
    for(int x : arr)
        cout << x << " ";

    cout << endl;

    cout << "Sum of Subarray Minimums = ";
    cout << obj.sumSubarrayMins(arr) << endl;

    return 0;
}