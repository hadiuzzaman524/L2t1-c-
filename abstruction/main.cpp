#include <iostream>
using namespace std;
class mobile_user
{
public:
    void call()
    {
        cout << "hello"<<endl;
    }
    virtual void send_messege()=0;

};
class rahim: public mobile_user
{
public:
    void send_messege()
    {
        cout << "this is rahim "<<endl;
    }
};
class karim:public mobile_user
{
public:
    void send_messege()
    {
        cout<< "this is karim"<<endl;
    }
};
int main()
{
    mobile_user *m;
    rahim r;
    karim k;
    m=&r;
    m->call();
    m->send_messege();
    m=&k;
    m->call();
    m->send_messege();
    return 0;
}
