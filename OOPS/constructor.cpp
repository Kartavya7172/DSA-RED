
#include<iostream>
using namespace std;

class vehicle{
    public:
    string name;
    int nooftyres;
    int doors;
    
    vehicle(string _name,int _nooftyres,int _doors)
    {
        this->name = _name;
        this->nooftyres = _nooftyres;
        this->doors = _doors;
    }
};

class bike:public vehicle{
    public:
    int noofgear;
    string bikecompany;

    bike(string name,int nooftyres,int _noofgear,string _bikecompany):vehicle(name,nooftyres,0)
    {
       this->noofgear = _noofgear;
       this->bikecompany = _bikecompany;
       cout<<name<<_bikecompany<<endl;
    }
};

int main()
{
    bike b("Gt650",2,6,"Royal Enfield");

    return 0;
}