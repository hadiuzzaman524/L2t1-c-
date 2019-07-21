#include <iostream>
using namespace std;
#define maxl 200
namespace myscope
{
    char *strstr(const char *str,const char *patt);
}
char line[500],patt[]= "is";
int main()
{
    int linenr=0;
    while(cin.getline(line,maxl))
    {
        ++linenr;
        if(myscope::strstr(line,patt)!=NULL)
        {
            cout.width(3);
            cout<< linenr << ":"<<line<<endl;
        }
    }
    return 0;
}
#include <string.h>
 namespace myscope
 {
     char *strstr(const char *s1,const char *s2)
     {
              int len=strlen(s2);
     for(; *s1 !='\0'; ++s1)
        if(strncmp(s1,s2,len)==0)
        return (char *)s1;
     return NULL;
     }

 }
