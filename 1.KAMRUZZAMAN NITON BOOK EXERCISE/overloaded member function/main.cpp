#include <iostream>
using namespace std;
class sstring
{
    void concat(int newlen);
    int maxlen,length;
    char *str;
public:
    int getlen();
    char *getstring();
    void showstring();
    void ccat(sstring &o);
    void ccat(char *s);
    sstring(const char *s);
    sstring(int len=127);
    virtual ~sstring();
};
sstring::sstring(const char *s)
{
    int len=0;
    while(*(s+len))
        len++;
    str=new char[len+1];
    for(int i=0; i<len; i++)
        *(str+len)=*s++;
    *(str+len)=NULL;
    length=maxlen=len;
}
sstring::sstring(int len)
{
    str=new char[len+1];
    *str=NULL;
    length=0;
    maxlen=len;

}
void sstring::concat(int newlen)
{   char *tstr=new char[newlen+1];
    int i=0;
    while(str[i])
        tstr[i]=str[i++];
    tstr[i]=NULL;
    delete[] str;
    str=tstr;
    maxlen=newlen;

}
void sstring::ccat(char *s)
{
    int len=0;
    while( *(s+len))
        len++;
    if((length+len)>=maxlen)
        concat(length+len);
    while(*s)
        str[length++]=*s++;
    str[length]=NULL;
}
void sstring::ccat(sstring &o)
{
    if((length+o.getlen())>=maxlen)
        concat(length+o.getlen());
    char *s=o.getstring();
    while(*s)
        str[length++]=*s++;
    str[length]=NULL;
}
void sstring::showstring()
{
    if(length==0)
        cout<< endl<< "No string in this object"<<endl;
    else
    {
        cout<< endl<< str<<endl;
    cout<< "string length: "<<length<<endl;
    cout<< "maximum capacity: "<<maxlen<<endl;
    }

}
char *sstring::getstring()
{
    return str;
}
int sstring::getlen()
{
    return length;
}
sstring:: ~sstring()
{
    delete []str;

}
int main()
{
   sstring a,b(30),c("welcome to c++ in bangla.");
   cout<< "\nin object a: ";
   a.showstring();
   cout<< "\nin object b: ";
   b.showstring();
   cout<< "\nin object c: ";
   c.showstring();
   a.ccat("hello");
   a.ccat("world.");
   cout<< "\nin object a: ";
   a.showstring();
   b.ccat(a);
   cout<< "\nin object b:";
   b.showstring();
   a.ccat(c);
   cout<< "\nin object a: ";
   a.showstring();
   cout<< "\nin object c: ";
   c.showstring();
   b.ccat(a);
   cout<< "\nin object b: ";
   b.showstring();
   b.ccat("\ngood luck...");
   cout<< "\nin object b: ";
   b.showstring();
}
