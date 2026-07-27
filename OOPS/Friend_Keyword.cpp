#include<iostream>
using namespace std;

class abc{
    private:
    int x;

    int getter() const { return x;}
    void setter(int Val1) {x = Val1;}

    friend int main();
    friend class xyz;
};
class xyz{
    public:
    void print(const abc &obj)
    {
        cout<<obj.x;
 
    }
};

int main()
{
    abc b;
    b.setter(5);
    cout<<b.x<<endl;
    xyz obj1;
    obj1.print(b);
    return 0;
}