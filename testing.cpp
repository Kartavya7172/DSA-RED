#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>arr = {1,2,3,4,5,6};
	int n = arr.size();
	for(int i=2;i>2;i++)
	{
		if(i == n-1)
		{
			i =0;
		}
		cout<<arr[i]<<" ";
	}

}	