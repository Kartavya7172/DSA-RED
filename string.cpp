#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    //creation
    string s;
    
    //initilise
    string name = "Babbar";
    string fullname = "Love Babbar";
    getline(cin,s);
    cout<<name<<endl;
    cout<<fullname<<endl;
    cout<<s<<endl;

    //length of the string
    cout<<s.length()<<endl;
    
    //push back function
    s.push_back('X');
    cout<<s<<endl;
    cout<<s.length()<<endl;

    //pop back function
    s.pop_back();
    cout<<s<<endl;
    cout<<s.length()<<endl;

    //string concatenation
    string n1= "kartavya";
    string n2 = "shuarya";

    string ans = n1+" "+n2;
    cout<<ans<<endl;
    cout<<"Length is:-"<<ans.length();
    //clear function
    ans.clear();
    //length after using the clear function
    cout<<ans<<endl;
    cout<<"Length is:-"<<ans.length();

    //empty() function
    
    if(ans.empty())
    {
        cout<<"The string is empty"<<endl;
    }
    else
    {
        cout<<"The string is not empty()"<<endl;
    }

    //reverse fucntion
    string reverse1 = "kartavya shaurya";
    reverse(reverse1.begin(),reverse1.end());
    cout<<reverse1<<endl;

    //begin() and end()
    string eb = "kartavya";
    
    cout<<*eb.begin()<<endl;
    cout<<*(eb.end()-1)<<endl;

    //front()
    string f = "kartavya";
    cout<<f.front()<<endl;

}