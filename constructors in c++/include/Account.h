#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;


class Account
{
    public:
        Account(const string&,unsigned long,double);
        Account(const string&);
        bool init(const string&,unsigned long,double);
        void display();
    private:
        string name;
        unsigned long nr;
        double state;
};

#endif // ACCOUNT_H
