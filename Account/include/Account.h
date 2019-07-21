#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;


class Account
{
    public:
        Account(const string &a_name="x",unsigned long a_nr=111111L,double a_state=0.0)
        {
            name=a_name;
            nr=a_nr;
            state=a_state;
        }
        ~Account()
        {

        }
        const string& getname()
        {
            return name;
        }
        bool setname(const string& s)
        {
            if(s.size()<1)
                return false;
            name=s;
            return true;
        }
        unsigned long getnr()
        {
            return nr;
        }
        void setnr(unsigned long n)
        {
            nr=n;
        }
        double setstate(double x)
        {
            state=x;
        }
        void display();
  private:
        string name;
        unsigned long nr;
        double state;
};

#endif // ACCOUNT_H


