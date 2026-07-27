#include<iostream>
#include<stack>
using namespace std;
void insertatsorted(stack<int>&s,int val)
{
    //base case
    if(s.empty() || s.top()<=val)
    {
        s.push(val);
        return;
    }
  

    //ek case me kaurunga 
    int curr = s.top();
    s.pop();

    //recursion
    insertatsorted(s,val);

    s.push(curr);
}

int main()
{
    stack<int> s;
    s.push(8);
    s.push(10);
    s.push(20);
    s.push(30);

    int val = 25;
    insertatsorted(s,val);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}