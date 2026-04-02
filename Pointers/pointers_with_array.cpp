#include<iostream>
using namespace std;

int main()
{
     int arr[] = {10,20,30,40,50};
     int *ptr = arr;
 
     //Accesing Base Adress
     cout<<arr<<endl;
     cout<<&arr[0]<<endl;
     cout<<ptr<<endl;
     cout<<&arr<<endl;

     cout<<arr<<endl;
     cout<<&arr<<endl;
     cout<<arr[0]<<endl;
     cout<<&arr[0]<<endl;
     cout<<ptr<<endl;
     cout<<&ptr<<endl;
     cout<<*ptr<<endl;
     cout<<*arr+1<<endl;
     cout<<*(arr+1)<<endl;
     cout<<*(arr+3)<<endl;

     //character array
     cout<<"Charcter arrray"<<endl;
     char ch[100] = "Babbar";
     char*chr = ch;
     cout<<ch<<endl;
     cout<<chr<<endl;
     cout<<&(ch[0])<<endl;
     
     cout<<&ch<<endl;
     cout<<ch[0]<<endl;
     cout<<&chr<<endl;
     cout<<*chr<<endl;
     cout<<*(chr+3)<<endl;
    return 0;
}