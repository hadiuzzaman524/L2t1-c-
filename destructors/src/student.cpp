#include "student.h"
#include <iostream>
using namespace std;
student::student()
{
   cout << "inside the constructor"<<endl;
}
student::~student()
{
    cout << "inside the destructor"<<endl;
}
void student::display()
{
    cout << "inside the display function"<<endl;
}
