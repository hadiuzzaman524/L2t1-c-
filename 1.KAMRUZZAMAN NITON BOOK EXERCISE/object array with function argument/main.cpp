#include <iostream>
#include <string.h>
using namespace std;
class person
{
    char name[25];
public:
    void getname(char *n)
    {
        strcpy(name,n);
    }
    /*char *getname(void)
    {
        return name;
    }*/
    void printname(void)
    {
        cout<< "\nName: "<<name<<endl;
    }
};
void namelength(person obj)
{
    int len;
    len=strlen(obj.getname());
    obj.printname();
    cout<< "length: "<<len<<endl;
}

int main()
{
   person obj[4];
   char getnam[25];
   cout<< "enter your name: "<<endl;
   for(int i=0; i<4; i++)
   {
       cout<< "\nName["<<i+1<<"]:"<<endl;
       cin>> getnam;
       obj[i].getname(getnam);
   }
   cout<< "\nlength of four name is: ";
   for(int i=0; i<4; i++)
   {
       namelength(obj[i]);
   }

}
