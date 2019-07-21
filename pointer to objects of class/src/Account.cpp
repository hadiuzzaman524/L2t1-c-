#include "Account.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
bool Account::init(const string &i_name,unsigned long i_nr,double i_balance)
{
  if(i_name.size()<1)
    return false;
  name=i_name;
  nr=i_nr;
  balance=i_balance;
  return true;
}
void Account::display()
{
    cout<<fixed<< setprecision(2)<<"..........................................\n";
    cout<< "account holder:"<<name<<endl;
    cout<< "account number:"<<nr<<endl;
    cout<< "account balance:"<<balance<<endl;
    cout<< "...............................................\n";
    cout<< endl;
}
