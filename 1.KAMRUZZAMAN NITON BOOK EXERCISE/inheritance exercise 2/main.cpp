#include <iostream>
#include <string.h>
using namespace std;
class A
{
private:
    char name[34];
    int roll;
public:
    A(char *nam,int rol)
    {
       strcpy(name,nam);
        roll=rol;
    }
    void print()
    {
        cout<< "Name: "<<name<<endl;
        cout<< "Id: "<<roll<<endl;
    }
};
class B: public A
{
private:
   float gpa;
public:
   void setvalue(char *name,int roll,float gp):A(name,roll)
   {
       gpa=gp;
   }
   void print1()
   {
       print();
       cout<< "GPA: "<<gpa<<endl;
   }

};
int main()
{
    B jaman("hadiuzzaman",5);
    jaman.print();
    jaman.setvalue(3.45);
    jaman.print1();
}
