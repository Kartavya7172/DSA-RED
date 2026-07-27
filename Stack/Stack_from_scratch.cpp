#include<iostream>
using namespace std;

class stack{
    public:
        int* arr;
        int capacity;
        int top = -1;

        stack(int size)
        {
            capacity = size;
            arr = new int[capacity];
        }

    void push(int val)
    {
        if(top == capacity-1)
        {
            cout<<"Stack Overflow"<<endl;
        }else{
            top++;
            arr[top] = val;
        }
    }
    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else{
            arr[top] = -1;
            top--;
        }
    }
    int getsize()
    {
        cout<<top+1<<endl;
    }
    bool isempty()
    {
        if(top == -1)
        {
            return true;
        }else{
            return false;
        }
    }
    int gettop()
    {
        if(top == -1)
        {
            return -1;
        }else{
            return arr[top];
        }
    }
    void print()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }

};

int main()
{
    stack s(10);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);

    // s.print();
    // s.pop();
    // s.print();

    // s.getsize();
    // s.gettop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();

    s.print();
    return 0;
}