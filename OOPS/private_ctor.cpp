#include<iostream>
using namespace std;

class box{
    public:
    int width;

    private:
    box(int _val):width(_val){};

    public:
    int getwidth() const{
        return width;
    }

    void setwidth(int value){
        width = value;
    }
    friend class boxmaker;
};
class boxmaker{
    public:
    int count;

    box countbox(int value1)
    {   
        ++count;
        return box(value1);
    }
};

int main()
{
    boxmaker b;
    box abc = b.countbox(5);
    cout<<abc.getwidth()<<endl;

    return 0;
}