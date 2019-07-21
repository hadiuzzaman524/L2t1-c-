#include <iostream>
#include <string.h>
using namespace std;
class jaman
{
public:
    char *ch;
    void print(void)
    {
        cout<< "\t"<< ch<< "the length is : "<< strlen(ch)<<endl;
    }
    jaman()
    {
        ch=new char[70];
    }
    jaman(jaman&);
};
jaman::jaman(jaman &st)
{
    strcpy(ch,st.ch);

}
int main()
{
    jaman s1;
    strcpy(s1.ch,"s1: md hadiuzzaman ");
    cout<< "before assiging:"<<endl;
    s1.print();
    jaman s2=s1;
    strcpy(s1.ch, "s1: most ashrafi akter");
    cout<< "after assiging:"<<endl;
    s1.print();
    s2.print();

    return 0;
}
