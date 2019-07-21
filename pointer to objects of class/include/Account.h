#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
using namespace std;

class Account
{
    public:
      bool init(const string&,unsigned long,double);
        void display();
    private:
        string name;
        unsigned long nr;
        double balance;
};

#endif // ACCOUNT_H

