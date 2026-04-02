#include<iostream>
using namespace std;

void printevenorodd(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
           if((arr[i]&1) == 0)
           {
            cout<<"Even"<<endl;
           }
           else
           {
            cout<<"Odd"<<endl;
           }
    }     
}
void numberofzeroandone(int arr[],int size)
{
    int icntzero=0,icntone=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] == 0)
        {
            icntzero++;
        }
        else
        {
            icntone++;
        }
    }
    cout<<icntzero<<endl;
    cout<<icntone<<endl;
}

int main()
{
    int arr[5] = {11,12,13,14,15};
    printevenorodd(arr,5);
    int brr[5] = {1,0,0,1,0};
    numberofzeroandone(brr,5);
    
    return 0;
}