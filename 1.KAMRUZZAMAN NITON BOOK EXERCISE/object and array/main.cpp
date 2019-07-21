#include <iostream>
#include <string.h>
using namespace std;

class person
{
    char name[25];
public:
    person()
    {
        cout<< "\nconstructing............"<<endl;
    }
    void printname(void)
    {
        cout<< "\nName: "<<name<<endl;
    }
    void getname(char *n)
    {
        strcpy(name,n);
    }
    ~person()
    {
        cout<< "destructing..........."<<endl;
    }
};
int main()
{
  person ob[5];

  ob[0].getname("habib");
  ob[1].getname("rakib");
  ob[2].getname("jaman");
  ob[3].getname("fariha");
  ob[4].getname("ashrafi");
  for(int i=0; i<5; i++)
  {
      ob[i].printname();
  }
}
