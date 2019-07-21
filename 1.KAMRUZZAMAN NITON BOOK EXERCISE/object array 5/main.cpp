#include <iostream>
#include <string.h>
using namespace std;
class person
{
    char name[24];
public:
    void getname(char *n)
    {
        strcpy(name,n);
    }
    char *getname(void)
    {
        return name;
    }
    void printname()
    {
        cout<< "Name: "<<name<<endl;
    }
};
void namelength(person obj[]);

int main()
{
    person obj[4];
    char getnam[25];
    cout<< "enter four name: ";
    for(int i=0; i<4; i++)
    {
        cout<< "\nName["<<i+1<<"]: "<<endl;
        cin>>getnam;
        obj[i].getname(getnam);
    }
    namelength(obj);
    return 0;
}
void namelength(person obj[])
{
    int len;
    for(int i=0; i<4; i++)
    {
        len=strlen(obj[i].getname());
        obj[i].printname();
        cout<< "the length is: "<<len<<endl;
    }
}
