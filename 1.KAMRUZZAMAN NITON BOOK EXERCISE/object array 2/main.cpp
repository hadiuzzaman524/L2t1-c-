#include <iostream>
#include <string.h>
using namespace std;
class person
{
    char name[25];
public:
    person(char *n)
    {
        strcpy(name,n);
    }
    void printname(void)
    {
        cout<< "Name: "<<name<<endl;
    }
};

int main()
{
   person ob[5]={"jaman","habib","rakib","orpi","oshin"};
   for(int i=0; i<5; i++)
   {
       ob[i].printname();
   }

}
