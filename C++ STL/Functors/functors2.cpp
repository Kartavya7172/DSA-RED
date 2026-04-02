#include<iostream>
#include<vector>
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
class studentcomparator{
    public:
    bool operator()(student a,student b){
        return a.marks>b.marks;        
    }
};
int main()
{
    student obj1(99,"shaurya");
    student obj2(92,"kartavya");
     
    studentcomparator cmp;
    if(cmp(obj1,obj2) == true)
    {
        cout<<"shaurya has more marks than kartavya"<<endl;
    }
    else{
        cout<<"Kartavya has more marks than shaurya"<<endl;
    }
}