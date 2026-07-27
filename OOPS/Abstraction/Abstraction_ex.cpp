#include<iostream>
#include "bird.h"
using namespace std;

void birddosomething (bird *&Bird)
{
     Bird->fly();
     Bird->eat();
}
int main()
{
   bird *Bird = new piegon();
   birddosomething(Bird);
}