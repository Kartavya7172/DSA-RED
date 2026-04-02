#include<iostream>
#include<string.h>
using namespace std;

bool palindromecheck(char arr[],int size)
{
    int s= 0;
    int e = size-1;
    while(s<e)
    {
        if(arr[s] != arr[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    char arr[50];
    bool ans = false;
    cin.getline(arr,50);
    int size = strlen(arr);
    ans = palindromecheck(arr,size);
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}
