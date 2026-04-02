#include<iostream>
#include<queue>

using namespace std;

int main()
{
    //creation
    queue<int>q;

    //insertion uisng push
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    //10,20,30,40
    
    //deletion using pop
    q.pop();
    //20,30,40

    //size()
    cout<<q.size()<<endl; 
    
    //front,back
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    //swap
    queue<int> first;
    first.push(10);
    first.push(10);

    queue<int> second;
    second.push(101);
    second.push(202);
    
    first.swap(second);
    cout<<first.front()<<" "<<first.back();
    return 0;
}