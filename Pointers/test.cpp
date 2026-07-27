#include<iostream>
using namespace std;

class Student{
      
public:
 int id;
 int age;
 char Division;
 int marks;
 float *gpa;
 Student(int id,int age,int Division,int marks,float gpa)
 {
    this->id = id;
    this->age = age;
    this->Division = Division;
    this->marks = marks;
    this->gpa = new float(gpa);
 }
 
 Student(const Student &srcobj)
 {
    this->id = srcobj.id;
    this->age = srcobj.age;
    this->Division = srcobj.Division;
    this->marks = srcobj.marks;
 }
 void study()
 {
   cout<<this->id<<" Sleeping"<<endl;
 }

 void bunk()
 {
  cout<<this->id<<" Bunk the class"<<endl;
 }

 ~Student()
 {
   delete gpa;
   cout<<this->id<<" Destructor is called";
 }
};

int main()
{
  //  Student A(101,23,'A',90);
  //  A.bunk();

  // Student B(102,28,'B',30);
  //  Student c= A;
  //  cout<<c.age<<endl;
  //  cout<<A.age<<endl;
  
   Student *C = new Student(103,18,'C',56,9.8);
   delete C;
}