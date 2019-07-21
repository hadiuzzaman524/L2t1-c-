#include <iostream>
#include <string.h>
using namespace std;
class objret
{
    char name[25];
public:
    objret()
    {
        cout<< "constructing,,,,,,,"<<endl;
    }
    void getname(char *n)
    {
        strcpy(name,n);
    }
    void printname()
    {
        cout<< "your name is:"<<name<<endl;
    }
    ~objret()
    {
        cout<< "destructing...."<<endl;
    }
};
objret funcA(void)
{
    char nam[25];
    objret ob;
    cout<< "enter your name:";
    cin>>nam;
    ob.getname(nam);
    return ob;

}
int main()
{
   objret ob1;
   ob1=funcA();
   ob1.printname();
}
