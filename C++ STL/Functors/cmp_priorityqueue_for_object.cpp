#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

class student{
    public:
    int marks;
    string name;
    student(int m,string n)
    {
       marks = m;
       name = n;
    }
};
class studentcmp{
    public:
    bool operator()(student a,student b)
    {
        return a.marks<b.marks;
    }
};
int main()
{
    priority_queue<student,vector<student>,studentcmp> pq2;
  
    pq2.push(student(67,"kartvaya"));
    pq2.push(student(32,"Alice"));
    pq2.push(student(27,"Bob"));
    pq2.push(student(19,"lara"));
    pq2.push(student(38,"jhon"));

    cout<<pq2.top().marks<<" "<<pq2.top().name<<endl;
    pq2.pop();
    cout<<pq2.top().marks<<" "<<pq2.top().name<<endl;
    pq2.pop();
    cout<<pq2.top().marks<<" "<<pq2.top().name<<endl;
    pq2.pop();
    cout<<pq2.top().marks<<" "<<pq2.top().name<<endl;
    pq2.pop();
    cout<<pq2.top().marks<<" "<<pq2.top().name<<endl;
    pq2.pop();
    return 0;
}