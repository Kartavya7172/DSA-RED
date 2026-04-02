#include<iostream>
#include<vector>
using namespace std;

int find_num(vector<int>brr,int s,int e,int t)
{
    int ans = 0;
      if(s>e)
      {
        return -1;
      }
      int mid = s+(e-s)/2;
      if(brr[mid] == t)
      {
        return mid;
      }
      else if(brr[mid] > t)
      {
       ans = find_num(brr,s,mid-1,t);
      }
      else{
        
        ans = find_num(brr,mid+1,e,t);
      }
      return ans;

}

int main()
{ 
    vector<int>arr = {10,11,23,35,45,67,89};
    int start = 0,end = arr.size()-1;
    int target = 89;
    int index = find_num(arr,start,end,target);
    cout<<index;
    return 0;
}