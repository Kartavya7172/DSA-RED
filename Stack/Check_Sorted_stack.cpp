#include<iostream>
#include<stack>
#include<climits>
using namespace std;
bool checksorted(stack<int> st,int curr = INT_MIN)
{
    if(st.empty())
    {
        return true;
    }
    if(curr>st.top())
    {
        return false;
    }

    curr = st.top();
    st.pop();
    
    return checksorted(st,curr);
   
}


int main()
{
    stack<int>s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    
    bool ans = checksorted(s);
    cout<<ans<<endl;
    return 0;

}