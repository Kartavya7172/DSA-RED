#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void reverse(char arr[],int size)
{
    int s =0;
    int e= size-1;
    while(s<e)
    {
      swap(arr[s],arr[e]);
      s++;
      e--;
    }
}
int main()
{
   char arr[50];
   cin.getline(arr,50);
   int s = strlen(arr);
   int length = strlen(arr);
   reverse(arr,s);
   cout<<arr<<endl;
   return 0;
}