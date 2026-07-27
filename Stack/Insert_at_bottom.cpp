#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int> &s,int val)
{
    //Iterative approach
    // stack<int>extra;
    // while(!s.empty())
    // {
    //     extra.push(s.top());
    //     s.pop();
    // }
    // s.push(val);
    // while(!extra.empty())
    // {
    //     s.push(extra.top());
    //     extra.pop();
    // }

    //Recursive
    //Base case
    if(s.empty())
    {
        s.push(val);
        return;
    }
    //1 case hum karnge
    int topelement = s.top();
    s.pop();

    //baki recursion ko do
    insertatbottom(s,val);
    s.push(topelement);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int value = 25;
    insertatbottom(s,value);

    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}