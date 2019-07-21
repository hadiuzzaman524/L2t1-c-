#include <iostream>
#include <string.h>
using namespace std;
class stringlength
{
public:
    char *p ;
    void print(void)
    {
        cout<< "\t"<<p<< "\tlength: "<<strlen(p)<<endl;
    }
    stringlength()
    {
        p=new char[50];

    }
};
int main()
{
   stringlength str1,str2;
   strcpy(str1.p,"string1 is : hello how are you?");
   strcpy(str2.p,"string2 is: i am not fine.");
   cout<< "before assigning:\n"<<endl;
   str1.print();
   str2.print();
   str2=str1;
   strcpy(str1.p, "this string assignet to STR1: ");
   cout<< "\n\nAfter assigning:"<<endl<<endl;
   str1.print();
   str2.print();

    return 0;
}
