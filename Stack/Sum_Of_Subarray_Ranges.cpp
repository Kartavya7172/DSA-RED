#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:

    // Find Next Smaller Element Index
    void nexts(vector<int> arr, vector<int> &ns)
    {
        stack<int> st;
        st.push(-1);

        int n = arr.size();

        // Traverse from right to left
        for(int i = n - 1; i >= 0; i--)
        {
            int element = arr[i];

            // Remove greater or equal elements
            while(st.top() != -1 && arr[st.top()] >= element)
            {
                st.pop();
            }

            ns.push_back(st.top());

            // Push current index
            st.push(i);
        }

        reverse(ns.begin(), ns.end());
    }

    // Find Previous Smaller Element Index
    void prevs(vector<int> arr, vector<int> &ps)
    {
        stack<int> st;
        st.push(-1);

        int n = arr.size();

        // Traverse from left to right
        for(int i = 0; i < n; i++)
        {
            int element = arr[i];

            // Remove greater elements
            while(st.top() != -1 && arr[st.top()] > element)
            {
                st.pop();
            }

            ps.push_back(st.top());

            st.push(i);
        }
    }

    // Find Next Greater Element Index
    void nextg(vector<int> arr, vector<int> &ng)
    {
        stack<int> st;
        st.push(-1);

        int n = arr.size();

        // Traverse from right to left
        for(int i = n - 1; i >= 0; i--)
        {
            int element = arr[i];

            // Remove smaller or equal elements
            while(st.top() != -1 && arr[st.top()] <= element)
            {
                st.pop();
            }

            ng.push_back(st.top());

            st.push(i);
        }

        reverse(ng.begin(), ng.end());
    }

    // Find Previous Greater Element Index
    void prevg(vector<int> arr, vector<int> &pg)
    {
        stack<int> st;
        st.push(-1);

        int n = arr.size();

        // Traverse from left to right
        for(int i = 0; i < n; i++)
        {
            int element = arr[i];

            // Remove smaller elements
            while(st.top() != -1 && arr[st.top()] < element)
            {
                st.pop();
            }

            pg.push_back(st.top());

            st.push(i);
        }
    }

    // Calculate total contribution
    long long sums(vector<int> arr, vector<int> next, vector<int> prev)
    {
        int n = arr.size();

        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            // If no next element exists
            if(next[i] == -1)
                next[i] = n;

            long long left = i - prev[i];
            long long right = next[i] - i;

            // Number of subarrays
            long long no_of_times = left * right;

            // Contribution
            long long total = no_of_times * arr[i];

            sum += total;
        }

        return sum;
    }

    long long subArrayRanges(vector<int>& nums)
    {
        vector<int> nextsmaller;
        vector<int> prevsmaller;

        nexts(nums, nextsmaller);
        prevs(nums, prevsmaller);

        vector<int> nextgreater;
        vector<int> prevgreater;

        nextg(nums, nextgreater);
        prevg(nums, prevgreater);

        // Sum of all minimum contributions
        long long small = sums(nums, nextsmaller, prevsmaller);

        // Sum of all maximum contributions
        long long big = sums(nums, nextgreater, prevgreater);

        // Range Sum = Max Contribution - Min Contribution
        return big - small;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {1, 2, 3};

    cout << "Array: ";
    for(int x : nums)
        cout << x << " ";

    cout << endl;

    cout << "Sum of Subarray Ranges = ";
    cout << obj.subArrayRanges(nums);

    return 0;
}