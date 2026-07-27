#include<iostream>
using namespace std;

class stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;   

    stack(int capacity)
    {
        size = capacity;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int val)
    {
        if(top1+1 == top2)
        {
            cout<<"Stack Overflow"<<endl;
        }else{
            top1++;
            arr[top1] = val;
        }
    }
    void push2(int val)
    {
        if(top2 == top1+1)
        {
            cout<<"Stcak Overflow";
        }
        else{
            top2--;
            arr[top2] = val;
        }
    }
    void pop1()
    {
        if(top1 < 0)
        {
            cout<<"Stack Underflow"<<endl;
        }else{
            arr[top1] = -1;
            top1--;
        }
    }
    
    void pop2()
    {
        if(top2 == size)
        {
            cout<<"Stack Underflow"<<endl;
  
        }else{
            arr[top2] = -1;
            top2++;
        }
    }
    void print(){
        for(int j=top2;j<size;j++)
        {
            cout<<arr[j]<<endl;
        }
        for(int i = top1;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
};

int main()
{
    stack s(10);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);
    s.push1(50);
    s.push1(60);
    s.push2(100);
    s.push2(90);
    s.push2(80);
    s.push2(70);

    s.print();
    return 0;
}