#include<iostream>
using namespace std;

int main()
{
    //Question One
    // int n;
    // cin>>n;

    // if(n%7 == 0 && n%5 == 0 && n%13 ==0)
    // {
    //     cout<<"YES"<<endl;
    // }else{
    //     cout<<"NO"<<endl;
    // }

    //Q2
    int age;
    cin>>age;

    if(age>=0 & age<=12)
    {
        cout<<"Child";
    }else if(age>=13 & age<=19){
        cout<<"Teenager";
    }else{
        cout<<"Adult";
    }

    //Q3
    int bill;
    cin>>bill;
    if(bill>500)
    {
        cout<<"The bill is deliverable";
    }else{
        cout<<"The bill is not deliverable";
    }

    //Q4
    
}