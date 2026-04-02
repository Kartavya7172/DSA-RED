#include<iostream>
using namespace std;

int main()
{
    int arr[3] = {10,20,30};
    int(*ptr)[3] = &arr;

    cout<<"arr"<<arr<<endl;
    //Base adress of first block of array
    cout<<"&arr"<<&arr<<endl;
    //Base adress of complete array
    cout<<"ptr"<<ptr<<endl;
    //ptr->address of complete array
    cout<<"*ptr"<<*ptr<<endl;
    //*ptr->address of staring of array block
    cout<<"(*ptr)[0]"<<(*ptr)[0]<<endl;
    cout<<"(*ptr)[1]"<<(*ptr)[1]<<endl;
    cout<<"(*ptr)[2]"<<(*ptr)[2]<<endl;
    cout<<"arr+1"<<arr+1<<endl;
    cout<<"ptr+1"<<ptr+1<<endl;


}