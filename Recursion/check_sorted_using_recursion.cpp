#include<iostream>
#include<vector>
using namespace std;

bool check_sort(vector<int>arr,int index,int size)
{
    bool ans = true;
    if(index>=size-1)
    {
      return true;
    }
    if(arr[index] > arr[index+1])
    {
      return false;
    }
    ans = check_sort(arr,index+1,size);
    return ans;
    
}

int main()
{
  vector<int>arr = {1,1,3,1};
  int n = arr.size();
  bool ans1 = check_sort(arr,0,n);
  if(ans1)
  {
    cout<<"true"<<endl;
  }
  else
  {
    cout<<"false"<<endl;
  }
}