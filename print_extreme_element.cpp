/*
434. Print Extreme Elements Alternately
Given an array of integers, your task is to output the
elements in an alternating fashion starting with the 
smallest, then the largest, followed by the next smallest, 
the next largest, and so on.
To achieve this, you will first sort the array. Then you will begin with the smallest element, 
followed by the largest, then the next smallest, and continue this pattern until all elements 
are printed.*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
    public:
      vector<int> printExtremeElementsAlternately(vector<int> &arr) {
        int small = 0;
        int largest = arr.size() - 1;
        sort(arr.begin(), arr.end());
        bool ispickingsmallest = true;
        vector<int> ans;
        while (small <= largest) {
          if (ispickingsmallest) {
            ans.push_back(arr[small++]);
            ispickingsmallest = false;
          } else {
            ans.push_back(arr[largest--]);
            ispickingsmallest = true;
          }
        }
        return ans;
      }
    };
int main()
{
    Solution obj;
    vector<int>arr = {2,4,6,1,5};
    vector<int>ans;
    ans = obj.printExtremeElementsAlternately(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<ans[i];
    }
}