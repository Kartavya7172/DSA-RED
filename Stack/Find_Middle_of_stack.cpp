#include<iostream>
#include<stack>
using namespace std;

void findmiddle(stack<int> &s,const int mid,int count)
{   
    if(count == mid)
    {
        cout<<s.top()<<endl;
        return;
    }

    int topelement = s.top();
    s.pop();

        findmiddle(s,mid,++count);
        s.push(topelement);

}

int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int count =0;
    int mid = s.size()/2;
    findmiddle(s,mid,count);
    return 0;
}