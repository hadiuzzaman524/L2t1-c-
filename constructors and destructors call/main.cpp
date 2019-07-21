#include <iostream>
#include <string>
using namespace std;

int count=0;
class demo
{
private:
    string name;
public:
    demo(const string&);
    ~demo();
};
demo::demo(const string& str)
{
    ++count;
    name=str;
    cout<< "i am the constructor of"<<name<<'\n'<<"this is the :"<<count<<".object!\n";
}
demo::~demo()
{
    cout<< "i am the destructor of "<<name<<'\n'<< "the :"<<count<< ".object will be destroyed."<<endl;
    --count;
}
int main()
{
   cout<< "the first statement in main()."<<endl;
   demo firstlocalobject("the 1. local object");

       demo seclocalobject( "the 2. local object");
       static demo staticobject("the static object");
       cout<< "\nlast statement within the inner block"<<endl;

   cout<< "last statement in main()."<<endl;
    return 0;
}
