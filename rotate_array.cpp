#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    // 1:-store last k elemnts
    //  int size = nums.size();
    //  vector<int>temp;
    //  k = k%size;
    //  for(int i=size-k;i<=size-1;i++)
    //  {
    //      int value = nums[i];
    //      temp.push_back(value);
    //  }
    //  //2-shift the elements by k place
    //  for(int i=size-1;i>=0;i--)
    //  {
    //      if(i-k >= 0)
    //      {
    //          nums[i] = nums[i-k];
    //      }
    //  }
    //  //3:- copy the store elemnts from temp array
    //  for(int i=0;i<k;i++)
    //  {
    //      nums[i] = temp[i];
    //  }
    //lakshay sir approach
    
    int n = nums.size();
    k = k%n;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());

  }
};

int main()
{
    Solution obj;
    int k = 4;
    vector<int>arr = {1,2,3,4,5,6,7};
    obj.rotate(arr,k);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}