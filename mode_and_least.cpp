#include<limits.h>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
int findMode(const vector<int> &arr) {
    // Implement logic to find mode
    int maxfrequency = 1;
    int currentfreq = 1;
    vector<int> arr1 = arr;
    int mode = arr[0];
    sort(arr1.begin(), arr1.end());
    int n = arr.size();
    for (int i = 0; i < n; i++) {
      if (arr1[i] == arr1[i - 1]) {
        currentfreq++;
      } else {
        currentfreq = 1;
      }

      if (currentfreq > maxfrequency) {
        maxfrequency = currentfreq;
        mode = arr1[i];
      }
    }
    return mode;
  }
  int findlow(vector<int> v)
  {
    int minfrequency = INT_MAX;
    int least = v[0];
    int cf = 1;
    sort(v.begin(), v.end());
    for(int i=1;i<v.size();i++)
    {
        if(v[i] == v[i-1])
        {
            cf++;
        }
        else
        {
            if(cf<minfrequency)
            {
                minfrequency = cf;
                least = v[i-1];
            }
            cf = 1;
        }
    }
    if(cf<minfrequency)
    {
        minfrequency = cf;
        least = v[v.size()-1]; 
    }

    return least;
  }
    pair<int, int> highestAndLowestFrequency(const vector<int>& arr) {
        // Implement logic to find elements with highest and lowest frequency
        int hf = findMode(arr);
        int lf = findlow(arr);
        return {hf, lf}; // Placeholder return; user will complete the logic
    }
};

int main()
{
    Solution obj;
    vector<int>arr = {1,3,2,1,3,2,12,1};
    pair<int,int> p=obj.highestAndLowestFrequency(arr);
    cout<<p.first<<" "<<p.second<<endl;

}