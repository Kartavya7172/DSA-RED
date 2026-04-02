#include<iostream>
#include<vector>
#include<algorithm>
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
        return a.marks>b.marks;
    }
};

int main()
{
    vector<student>arr;
    arr.push_back(student(99,"shaurya"));
    arr.push_back(student(46,"kartavya"));
    arr.push_back(student(13,"Bob"));
    arr.push_back(student(53,"Alice"));
    
    sort(arr.begin(),arr.end(),studentcmp());
    for(student i:arr)
    {
        cout<<i.marks<<" "<<i.name<<endl;
    }
    return 0;
}