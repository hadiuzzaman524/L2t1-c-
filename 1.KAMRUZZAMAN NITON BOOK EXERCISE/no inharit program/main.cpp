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
    void showstudent(void)
    {
        cout<< "Name: "<<name<<endl;
        cout<< "Id: "<<id<<endl;
    }
};

int main()
{
    student jaman("jaman","235");
    jaman.showstudent();
}
