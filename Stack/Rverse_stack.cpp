#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int> &s1,int val)
{
    if(s1.empty())
    {
        s1.push(val);
        return;
    }

    int topelement = s1.top();
    s1.pop();

    insertatbottom(s1,val);
    s1.push(topelement);
}


void reverse(stack<int> &s)
{
    // Base case
    if(s.empty())
    {
        return;
    }

    // 1 case
    int toInsert = s.top();
    s.pop();

    // Recursive call
    reverse(s);

    // Insert at bottom
    insertatbottom(s, toInsert);
}

int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    
    reverse(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}