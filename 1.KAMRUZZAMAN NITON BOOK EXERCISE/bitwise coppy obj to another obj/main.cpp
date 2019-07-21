#include <iostream>
#include <string.h>
using namespace std;
class student
{
    char s_name[14];
    char s_id[10];
    float s_cgpa;
public:
    void getinfo(char *name,char *id, float cgpa)
    {
        strcpy(s_name,name);
        strcpy(s_id,id);
        s_cgpa=cgpa;
    }
    void showinfo(void)
    {
        cout<< "Name: "<<s_name<<endl;
        cout<< "Id: "<< s_id<<endl;
        cout<< showpoint;
        cout<< "Cgpa: "<< s_cgpa<<endl ;

    }
};
int main()
{
   student a,b;
   a.getinfo("hadiuzzaman","1234",3.0);
   b=a;
   cout<< "printing object a information:"<<endl;
   a.showinfo();
    cout<< "printing object b information: "<<endl;
    b.showinfo();
    return 0;
}
