#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    // Implement the solution here
    int row = matrix.size();
    int col = matrix[0].size();
    int n = row * col;
    int s = 0;
    int e = n - 1;
    while (s <= e) {
      int mid = s + (e - s) / 2;

      int rowindex = mid / col;
      int colindex = mid % col;

      if (matrix[rowindex][colindex] == target) {
        return true;
      }
      if (matrix[rowindex][colindex] < target) {
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
    return false;
  }
};

int main()
{
  Solution obj;
  vector<vector<int>>arr = {{1,2,3,4},
                            {5,6,7,8}};
  bool ans = obj.searchMatrix(arr,6);
  if(ans)
  {
    cout<<"found";
  }
  else
  {
    cout<<"Not found";
  }
}