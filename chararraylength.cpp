#include<iostream>
#include<string.h>
using namespace std;

int lenght(char arr[],int size)
{
    int i=0;
    int j=0;
     while(arr[i] != '\0')
     {
        i++;
        j++;
     }      
     return j;
}
int lengthinbuilt(char arr1[],int size1)
{
    int ans = strlen(arr1);
    return ans;
}
int main()
{
    char ch[50];
    cin.getline(ch,50);
    cout<<"The length of the string using the user defined functin is:-";
    int ans = lenght(ch,50);
    cout<<ans<<endl;

    cout<<"The length of the string using the inbuilt function is:-";
    int ans1 = lengthinbuilt(ch,50);
    cout<<ans1<<endl;
    
    return 0;

}