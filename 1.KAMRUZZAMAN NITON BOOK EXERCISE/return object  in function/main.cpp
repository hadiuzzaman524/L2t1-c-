#include <iostream>
#include <string.h>
using namespace std;
class objret
{
    char name[25];
public:
    void getname(char *n)
    {
        strcpy(name,n);
    }
    void printname(void)
    {
        cout<< "\n\nso your name is : "<< name<<endl;
    }

};
   objret funcA(void)
    {
        char get[25];
        objret ob;
        cout<< "enter your name:";
        cin>>get;
        ob.getname(get);
        return ob;
    }

int main()
{
   objret obmain;
   obmain=funcA();
   obmain.printname();
    return 0;
}
