#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class strin
{
    char *str;
    int length;
public:
    strin(int len=127);
    void setstring(char *p);
    char *getstring()
    {
        return str;
    }
    void *operator new(size_t size);
    void operator delete(void *p);
    ~strin()
    {
        delete [] str;

    }
};
void strin::setstring(char *p)
{
    int len=strlen(p);
    if(len>length)
    {
      cout<< "\nerror : small buffer,so string is truncated"<<endl;
    strncpy(str,p,length);
    str[length]=NULL;
    }
    else
    {
        strcpy(str,p);
    }

}
strin::strin(int len)
{
    str=new char[len+1];
    length=len;
}
void *strin::operator new(size_t size)
{
    void *p;
    p=malloc(size);
    return p;
}
void strin::operator delete(void *p)
{
    free(p);
}
int main()
{
    strin *o;
    o=new strin(25);
    o->setstring("hello world");
    cout<< o->getstring();
    o->setstring("welcome to our university");
    cout<< endl<< o->getstring();
    delete o;
}
