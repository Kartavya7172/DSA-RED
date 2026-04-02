#include<iostream>
#include<set>
using namespace std;

int main()
{

    //creation
    set<int> st;
    
    //insert
    st.insert(10);
    st.insert(5);
    st.insert(7);
    st.insert(20);

    //begin and end
    set<int>::iterator it = st.begin();
    while(it != st.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    //empty()
    if(st.empty() == true)
    {
        cout<<"The set is empty"<<endl;
    }
    else{
        cout<<"The set is not empty"<<endl;
    }
    
    //size()
    cout<<st.size()<<endl;
    
    //clear()
    //st.clear();

    //erase
    st.erase(st.begin());
    
    //find
    if(st.find(10) == st.end())
    {
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key is found"<<endl;

    }
    
    //count
    if(st.count(10) == 1)
    {
        cout<<"present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}