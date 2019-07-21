#include "student.h"
#include <iostream>
#include <string>
using namespace std;
void student::jaman(void)
{
    string nm;
    float gp;
    int rl;
    cout<< "enter your name:"<<endl;
   getline(cin,nm);
   cout<< "enter your gpa:";
   cin>>gp;
   cout<< "enter your id:";
   cin>>rl;
        name=nm;
        gpa=gp;
        id=rl;
        cin.sync();

}
void student::display()
{
    cout<< "name:"<<name<<endl;
    cout<< "gpa:"<<gpa<<endl;
    cout<< "id:"<<id<<endl;
}
