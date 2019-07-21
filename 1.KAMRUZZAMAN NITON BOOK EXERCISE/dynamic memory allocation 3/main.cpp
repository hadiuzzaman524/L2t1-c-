#include <iostream>
#include <string.h>
using namespace std;
class student
{
    char name[25];
    char id[10];
    float cgpa;
public:
    student(char *getname,char *getid,float getcgpa)
    {
        strcpy(name,getname);
        strcpy(id,getid);
        cgpa=getcgpa;
    }
    void showinfo()
    {
        cout<< "Name: "<< name<<endl;
        cout<< "Id: "<< id<<endl;
        cout<< "Cgpa: "<<cgpa<<endl;
    }
};
int main()
{
  int *iptr;
  iptr=new int(50);
  cout<< "integer value: "<< *iptr<<endl<<endl;
  student *sptr;
  sptr=new student("jaman","123",3.65);
  sptr->showinfo();

}
