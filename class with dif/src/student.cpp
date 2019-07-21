#include <iostream>
#include "student.h"
using namespace std;

student::student()
{

    cout<< "id:"<<id<<endl<<"gpa:"<<gpa<<endl;

}
 student::display(int x,double y)
{
     id=x;


    gpa=y;
}
