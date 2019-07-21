#include <iostream>

using namespace std;
class strin
{
    char *str;
    int length;
public:
    strin(const char *s);
    char operator [](int i);
    ~strin()
    {
        delete [] str;
    }
};
strin::strin(const char *s)
{
   int len=0;
   while(*(s+len))
    len++;
   str=new char[len+1];
   for(int i=0; i<len; i++)
    *(str+i)=*s++;
   *(str+len)=NULL;
   length=len;
}
char strin::operator[](int i)
{
    if(i<0||i>length)
    {
        cout<< "\nout of array boundary.";
        return NULL;
    }
    return str[i];
}
int main()
{
   strin o("string create.");
   int i=0;
   while(o[i])
        cout<< o[i++];
   cout<<endl;
}
