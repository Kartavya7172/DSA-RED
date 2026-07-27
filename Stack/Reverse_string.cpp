#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;
    string str = "Kartavya";
    string ans = "";
    int i=0;
    while(str[i] != '\0')
    {
        s.push(str[i]);
        i++;
    }
    while(!s.empty())
    {
        ans = ans+s.top();
        s.pop();
    }
    cout<<ans<<endl;
}