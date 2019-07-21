#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
    char *p;
    void print(void)
    {
        cout<< "\t"<< p<< "the length is:"<<strlen(p)<<endl;
    }
    A()
    {
        p=new char[50];
    }
};
int main()
{   A a1,a2;
    cout<< "before exchanging: "<<endl;
    strcpy(a1.p,"my name is hadiuzzaman ");
    strcpy(a2.p,"my name is ashrafi akter ");
    a1.print();
    a2.print();
    a2=a1;
    cout<< "after exchanging: "<<endl;
    strcpy(a1.p,"my name is fariha sultana");
    a1.print();
    a2.print();

    return 0;
}
