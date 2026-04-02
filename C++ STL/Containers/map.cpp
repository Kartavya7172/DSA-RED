#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{

    //unordered_map creation
    unordered_map<string,string>table;

    table["in"] = "India";
    
    table.insert(make_pair("br","brazil"));

    pair<string,string> p;
    p.first = "ne";
    p.second = "Newzeland";
    table.insert(p);

    //size()
    cout<<table.size()<<endl;

    //clear()
    //table.clear();

    //empty()
    if(table.empty() == true)
    {
        cout<<"There are no entires in the table"<<endl;
    }else{
        cout<<"There are entrie sprsent in the table"<<endl;
    }


    //at()
    cout<<table.at("in")<<endl;

    //begin and end
    
    unordered_map<string,string>::iterator it = table.begin();
    while(it != table.end())
    {
        pair<string,string> p = *it;
        cout<<p.first<<"->"<<p.second<<" ";
        it++;
    }
    cout<<endl;
    //erase
    //table.erase(table.begin(),table.end());
    //table.erase(table.begin());
    //table.erase("in");

        unordered_map<string,string>::iterator it1 = table.begin();
    while(it1 != table.end())
    {
        pair<string,string> p = *it1;
        cout<<p.first<<"->"<<p.second<<" ";
        it1++;
    }
    cout<<endl;

    //find()
        if(table.find("br") == table.end())
        {
            cout<<"key Not found"<<endl;
        }
        else{
            cout<<"Key Found"<<endl;
        }
    //count
    if(table.count("in") == 1)
    {
        cout<<"There is the key in the table"<<endl;
    }
    if(table.count("in") == 0)
    {
        cout<<"There is no key present in the table"<<endl;
    }

    //ordered_map creation
    map<int,string>map1;
    map1.insert(make_pair(3,"shaurya"));
    map1.insert(make_pair(1,"kartavya"));
    map1.insert(make_pair(2,"Bob"));

    map<int,string>::iterator it2 = map1.begin();
    while(it2 != map1.end())
    {
         pair<int,string> p = *it2;
          cout<<p.first<<"->"<<p.second<<" ";
          it2++;  
    }
    cout<<endl;


        return 0;
}