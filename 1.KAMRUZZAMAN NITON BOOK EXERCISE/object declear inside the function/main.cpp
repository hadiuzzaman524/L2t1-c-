#include <iostream>
#include <string.h>
using namespace std;
class student
{
public:
    char s_name[20];
    char s_id[15];
    float s_cgpa;
    void showinfo(void)
    {
        cout<< "Name: "<< s_name<<endl;
        cout<< " Id: "<< s_id<<endl;
        cout<< "cgpa: "<< s_cgpa<<endl;

    }
};
void useobject(char *name,char *id,float cgpa)
{
    student A;
    strcpy(A.s_name,name);
    strcpy(A.s_id,id);
    A.s_cgpa=cgpa;
    A.showinfo();
}

int main()
{
   useobject("hadiuzzaman","1234" ,3.45);
    return 0;
}
