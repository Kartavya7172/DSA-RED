#include<iostream>
#include<vector>
#include<forward_list>
#include<algorithm>
#include<list>
using namespace std;

int main()
{

    //iterator_basic
    vector<string>s = {"DSA","WEB_DEV","DEV_OPS"};
    vector<string>::iterator it ;

    for(it = s.begin();it != s.end();it++)
    {
        cout<<*it<<" ";
    }

    //forward_iterator;
    forward_list<int> list1;
    list1.push_front(10);
    list1.push_front(20);
    list1.push_front(30);

    forward_list<int>::iterator it1 = list1.begin();
    while(it1 != list1.end())
    {
         cout<<*it1<<" ";
         it1++;
    }
    cout<<endl;
    //Bidirectional_iterator
    list<int>mylist;
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(320);
    mylist.push_back(40);
    
    list<int>::iterator it3 = mylist.begin();
    while(it3 != mylist.end())
    {
        //writing
        (*it3) += 5;
        //reding
        cout<<*it3<<" ";
        it3++; 
    }
    //backward traversal
    cout<<endl;
    list<int>::iterator it4 = mylist.end();
    while(it4 != mylist.begin())
    {
        --it4;
        //writing
        (*it4) += 5;
        //reding
        cout<<*it4<<" ";
         
    }
    cout<<endl;
    //Random Access
    //1.Forward Traversal  
    vector<int> arr = {1,2,3,4,5};
    vector<int>::iterator itr = arr.begin();
    while(itr != arr.end())
    {
        //writing
        (*itr) += 5;
        //read
        cout<<*itr<<" ";
        itr++;
    }
     cout<<endl;
    //2.Backward Traversal
    vector<int> brr = {1,2,3,4,5};
    vector<int>::iterator itr1 = brr.end();
    while(itr1 != brr.begin())
    {
        --itr1;
        //writing
        (*itr1) += 5;
        //read
        cout<<*itr1<<" ";
        
    }
      cout<<endl;
    //3.random_access
    vector<int>::iterator itr4=  arr.begin()+3;
    cout<<*itr4<<endl;
    
}