#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:

    // Function to find Next Smaller Element (Index)
    void nextsmallest(vector<int> heights, vector<int> &next)
    {
        int n = heights.size();

        stack<int> s;

        // Push -1 as a dummy index
        // It means "No Smaller Element Exists"
        s.push(-1);

        // Traverse from Right -> Left because
        // we are searching for Next Smaller Element
        for(int i = n - 1; i >= 0; i--)
        {
            int element = heights[i];

            // Remove all elements greater than or equal
            // to the current element because they can
            // never become the Next Smaller Element
            while(s.top() != -1 && heights[s.top()] >= element)
            {
                s.pop();
            }

            // Top of stack is the Next Smaller Index
            next.push_back(s.top());

            // Push current index
            s.push(i);
        }

        // Since we traversed from right to left,
        // reverse the answer to match original order
        reverse(next.begin(), next.end());
    }

    // Function to find Previous Smaller Element (Index)
    void prevsmallest(vector<int> heights, vector<int> &prev)
    {
        int n = heights.size();

        stack<int> s;

        // Dummy index
        s.push(-1);

        // Traverse Left -> Right because
        // we need Previous Smaller Element
        for(int i = 0; i < n; i++)
        {
            int element = heights[i];

            // Remove all greater or equal heights
            while(s.top() != -1 && heights[s.top()] >= element)
            {
                s.pop();
            }

            // Top is Previous Smaller Index
            prev.push_back(s.top());

            // Push current index
            s.push(i);
        }
    }

    int largestRectangleArea(vector<int>& heights)
    {
        vector<int> next;
        vector<int> prev;

        // Find Next Smaller Index for every bar
        nextsmallest(heights, next);

        // Find Previous Smaller Index for every bar
        prevsmallest(heights, prev);

        int maxArea = INT_MIN;
        int n = heights.size();

        // Calculate area considering every bar
        // as the smallest bar of the rectangle
        for(int i = 0; i < n; i++)
        {
            // If no next smaller exists,
            // rectangle can extend till last index
            if(next[i] == -1)
                next[i] = n;

            // Width = Right Boundary - Left Boundary - 1
            int width = next[i] - prev[i] - 1;

            // Current bar height
            int height = heights[i];

            // Area formed using current bar
            int area = width * height;

            // Update maximum area
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};

int main()
{
    Solution obj;

    int n;

    cout << "Enter number of bars : ";
    cin >> n;

    vector<int> heights(n);

    cout << "Enter heights : ";

    for(int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int ans = obj.largestRectangleArea(heights);

    cout << "\nLargest Rectangle Area = " << ans << endl;

    return 0;
}