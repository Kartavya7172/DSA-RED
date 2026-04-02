#include<iostream>
#include<list>
using namespace std;

int main()
{
    //creation
   list<int> mylist;
   
   //insertion from back
   mylist.push_back(10);
   mylist.push_back(20);
   mylist.push_back(30);
   mylist.push_back(40);

   //insertion from front
   mylist.push_front(11);
   mylist.push_front(12);

   //deletion form front
   mylist.pop_front();

   //deletion from back
   mylist.pop_back();

   for(int i:mylist)
   {
     cout<<i<<endl;
   }
   
   //size of list()
   cout<<mylist.size()<<endl;

   //clear the list
   mylist.clear();

   //check if the list is empty or not

   if(mylist.empty() == true)
   {
     cout<<"List is empty"<<endl;
   }
   else
   {
     cout<<"List is not empty"<<endl;
   }

   //front and back element in the list
   mylist.push_back(20);
   mylist.push_front(10);
   mylist.push_back(30);
   
   cout<<mylist.front()<<endl;
   cout<<mylist.back()<<endl;

   //begin and end
   cout<<"Before removing the elemnt"<<endl;
    list<int> :: iterator it = mylist.begin();
    while(it != mylist.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    
    //remove
    mylist.remove(10);
    cout<<"After removing the elemnt"<<endl;
    list<int> :: iterator it1 = mylist.begin();
    while(it1 != mylist.end())
    {
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;
    //swap
    list<int> firstswap;
    firstswap.push_back(10);
    firstswap.push_back(20);
    firstswap.push_back(30);

    list<int> secondswap;
    secondswap.push_back(100);
    secondswap.push_back(200);
    secondswap.push_back(300);

    firstswap.swap(secondswap);

    auto it4 = firstswap.begin();
    while(it4 != firstswap.end())
    {
        cout<<*it4<<" ";
        it4++;
    }
    cout<<endl;
    //insert
    list<int> mylist1;
    mylist1.push_back(1);
    mylist1.push_back(2);
    mylist1.push_back(3);
    mylist1.push_back(4);
    mylist1.push_back(5);

    mylist1.insert(mylist1.begin(),10);

    for(int i:mylist1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //erase
    
    mylist1.erase(mylist1.begin(),mylist1.end());

}