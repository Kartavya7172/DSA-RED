#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //creation

    vector<int> marks(5);

    vector<int>miles(10);

    vector<int> distance(15,0);

    //cout<<*(distance.begin());

    //size(),push_back,pop_back
    marks.push_back(10);

    for(int i=0;i<marks.size();i++)
    {
        cout<<marks[i];
    }
    cout<<endl;
    cout<<"size before using pop back"<<marks.size()<<endl;
   // marks.pop_back();
    cout<<"size after using pop back"<<marks.size()<<endl;

    //front,back
    cout<<marks.front()<<endl;
    cout<<marks.back()<<endl;

    //empty()
    vector<int> students;
    if(students.empty())
    {
        cout<<"There are no marks in the vector marks"<<endl;
    }
    else
    {
        cout<<"There are marks in the vector marks"<<endl;
    }

    //at()
    vector<int> students1;
    students1.push_back(10);
    students1.push_back(20); 
    students1.push_back(30);

    cout<<students1.at(1)<<endl;

    //reserve
    vector<int>reserve1;
    reserve1.reserve(10);
    cout<<reserve1.capacity()<<endl;
    cout<<reserve1.size()<<endl;

    //max_size()
    vector<int>maxsize;
    cout<<maxsize.max_size()<<endl;

    //clear()
    //students1.clear();

    //insert
    students1.insert(students1.begin(),50);
    cout<<students1.front()<<endl;

    //erase
    students1.erase(students1.begin());

    //2D vector
    vector<vector<int>>arr(5,vector<int>(4));
    int rows = arr.size();
    int coulmns = arr[0].size();

    cout<<"Rows"<<rows<<"columns"<<coulmns<<endl;

    //jagged array
    vector<vector<int>>brr(6);
    brr[0] = vector<int>(6,-1);
    brr[1] = vector<int>(4);
    brr[2] = vector<int>(7);
    brr[3] = vector<int>(5);
    brr[4] = vector<int>(2);
    brr[5] = vector<int>(7);

    for(int i=0;i<brr.size();i++)
    {
        for(int j=0;j<brr[i].size();j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    
   
}