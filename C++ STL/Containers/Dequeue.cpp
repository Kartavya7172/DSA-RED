#include<iostream>
#include<deque>
using namespace std;

int main()
{
    //creation of tye deque
    deque<int> dq;
    
    //insertion using puhs_back
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    
    //insretion using push_front
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);

    //deletion using pop_front()
    dq.pop_front();

    //deletion using pop_back()
    dq.pop_back();

    //front and back
    cout<<dq.front()<<" "<<dq.back()<<endl;

    //size()
    cout<<dq.size()<<endl;

    //empty()
    if(dq.empty() == true)
    {
        cout<<"The deque is empty"<<endl;
    }
    else{
        cout<<"The deque is not empty"<<endl;
    }

    //begin and end
    deque<int> ::iterator it = dq.begin();
    while(it != dq.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    //at
    cout<<dq.at(2)<<endl;
    
    //insert
    dq.insert(dq.begin(),9);
    
    deque<int> ::iterator it1 = dq.begin();
    while(it1 != dq.end())
    {
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;

    //erase
    dq.erase(dq.begin()+1,dq.begin()+3);

    
    deque<int> ::iterator it2 = dq.begin();
    while(it2 != dq.end())
    {
        cout<<*it2<<" ";
        it2++;
    }
    cout<<endl;

    //clear
    dq.clear();

    //swap
    deque<int> dq1;
    dq1.push_back(10);
    dq1.push_back(20);
    dq1.push_back(30);

    deque<int> dq2;
    dq2.push_back(101);
    dq2.push_back(201);
    dq2.push_back(301);
   
    dq1.swap(dq2);

        deque<int> ::iterator it3 = dq1.begin();
    while(it3 != dq1.end())
    {
        cout<<*it3<<" ";
        it3++;
    }
    cout<<endl;


}