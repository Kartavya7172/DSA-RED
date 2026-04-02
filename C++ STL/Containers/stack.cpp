#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //creation 
    stack<int>s;

    //insertion using push
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);

    //pop()
    s.pop();

    //size()
    cout<<s.size()<<endl;

    //top()
    cout<<s.top()<<endl; 

    //empty()
    if(s.empty() == true)
    {
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The stack is not empty"<<endl;
    }

    //swap()
    stack<int>s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    
    stack<int>s2;
    s2.push(4);
    s2.push(5);
    s2.push(6);
    
    s1.swap(s2);

    cout<<s1.top()<<endl;
    return 0;
}