#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //creation
    priority_queue<int> pq;

    //push
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(70);
    pq.push(50);

    //top()
    cout<<pq.top()<<endl;

    //pop()
    pq.pop();
    cout<<pq.top()<<endl;

    //size
    cout<<pq.size()<<endl;

    //empty()
    if(pq.empty() == true)
    {
        cout<<"The priority queue is empty"<<endl;
    }
    else{
        cout<<"The priority quque is not empty"<<endl;
    }

    //swap
    priority_queue<int>q1;
    q1.push(11);
    q1.push(121);
    q1.push(110);
    q1.push(67);

    priority_queue<int>q2;
    q2.push(788);
    q2.push(132);
    q2.push(130);
    q2.push(37);

    q1.swap(q2);

    cout<<q1.top()<<endl;

}