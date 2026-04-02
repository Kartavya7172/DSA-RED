#include<iostream>
using namespace std;
void uppertolower(char arr[],int size)
{
    int i=0;
    while(arr[i] != '\0')
    {
       
        if(arr[i]>='a' && arr[i]<='z')
        {
            arr[i] = (char)(arr[i]-32);
        }
         i++;
    }
}

int main()
{
    char arr[50];
    cin.getline(arr,50);
    uppertolower(arr,50);
    cout<<arr<<endl;
}