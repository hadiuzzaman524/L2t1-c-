#include <iostream>
#include <string.h>
using namespace std;
class student
{
    char name[64];
    char id[12];
public:
    student(char *name,char *id)
    {
        strcpy(this->name,name);
        strcpy(this->id,id);
    }
    void showstudentinfo(void)
    {
        cout<< "\n Name: "<<name<<endl;
        cout<< "\n Id: "<<id<<endl;
    }

};
class registation:public student
{
    float regfees;
    char *regdate;
public:
    registation(char *name,char *id,float fees,char *date):student(name,id)
    {
        regfees=fees;
        strcpy(this->regdate,date);

    }
    void showregsinfo(void)
    {
        showstudentinfo();
        cout<< "fees: "<<regfees<<endl;
        cout<< "date: "<<regdate<<endl;
    }
};
int main()
{
   registation jaman("jaman","12344",4455.34,"01.03.2005");
   jaman.showstudentinfo();
   jaman.showregsinfo();
}
