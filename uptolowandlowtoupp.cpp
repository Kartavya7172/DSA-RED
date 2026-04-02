#include<iostream>
using namespace std;

// char uptolow(char c)
// {
//     return c-'A'+'a';
// }
char lowtoup(char c)
{
    return c-'a'+'A';
}

int main()
{
    char ch;
    cin>>ch;
    //char temp = uptolow(ch);
    char temp = lowtoup(ch);
    cout<<temp<<endl;
}