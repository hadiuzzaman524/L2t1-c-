#include "Account.h"
#include <iostream>
using namespace std;

/*Account::Account(const string& a_name,unsigned long a_nr,double a_state)
{
  nr=a_nr;
  name=a_name;
  state=a_state;
}
Account::Account(const string& a_name)
{
   name=a_name;
   nr=11111;
   state=0.0;

}
*/
void Account::display()
{   cout<< "name:"<<name<<endl;
    cout<< "number:"<<nr<<endl;
    cout<< "state:"<<state<<endl;

}
