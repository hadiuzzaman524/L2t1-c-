#include "student.h"
#include <iostream>

using namespace std;
void student::display1()const
{
  cout << "i am constant function."<<endl;
}
void student::display2()
{
    cout << "i am non constant function"<<endl;

}
