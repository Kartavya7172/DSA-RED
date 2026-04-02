/*Find Quotient Without Using Division and Modulus Operators*/
#include <limits.h>
#include<iostream>
using namespace std;
long long int getabs(long long int a) {
  if (a < 0) {
    a = 0 - a;
  }
  return a;
}
long long int solve(long long dividend, long long divisor) {
  long long int s = 0;
  long long int e = dividend;

  long long int ans = -1;
  while (s <= e) {
    long long int mid = s + ((e - s) >> 1);
    long long int product = divisor * mid;

    if (product == dividend) {
      return mid;
    }
    if (product > dividend) {
      e = mid - 1;
    } else {
      ans = mid;
      s = mid + 1;
    }
  }
  return ans;
}
long long int findQuotient(int dividend, int divisor) {

  if (divisor == 0) {
    return INT_MAX;
  }
  long long int absdivisor = getabs(divisor);
  long long int absdividend = getabs(dividend);

  long long int ans = solve(absdividend, absdivisor);

  if (dividend > 0 && divisor > 0) {
    return ans;
  } else if (dividend < 0 && divisor < 0) {
    return ans;
  } else {
    ans = 0 - ans;
    return ans;
  }

  return 0;
}

int main()
{
    int ans = findQuotient(6,3);
    cout<<ans<<endl;
}