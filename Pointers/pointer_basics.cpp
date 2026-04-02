#include<iostream>
using namespace std;

int main()
{
    int xyz = 15;
    int pqr = 12;
    
    int* p1 = &xyz;
    int* p2 = &pqr;
    
    cout<<xyz<<endl; //15
    cout<<pqr<<endl; //12
    cout<<*p1<<endl; //15
    cout<<*p2<<endl;  //12
    cout<<&p1<<endl; //add of p1
    cout<<&p2<<endl; //add of p2
    cout<<p1<<endl;  //add of xyz;
    cout<<p2<<endl;  //add of pqr
    cout<<&xyz<<endl; //add of xyz
    cout<<&pqr<<endl; //add of pqr

    //size of pointer
    char ch  = 'a';
    bool ans = false;
    float f = 2.3;
    double d = 2.334;
    
    char*chtr = &ch;
    bool*btr = &ans;
    float*ftr = &f;
    double*dtr = &d;

    cout<<sizeof(chtr)<<endl;
    cout<<sizeof(btr)<<endl;
    cout<<sizeof(ftr)<<endl;
    cout<<sizeof(dtr)<<endl;
    return 0; 
}