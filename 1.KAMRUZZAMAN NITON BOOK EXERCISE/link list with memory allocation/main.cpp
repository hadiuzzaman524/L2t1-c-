#include <iostream>
using namespace std;
class listelement
{
private:
    int i;
public:
    listelement()
    {
        cout<< "constructing.............."<<endl;
    }
    void setvalue(int x)
    {
        i=x;
    }
    int getvalue(void)
    {
        return i;
    }
    listelement *nextelement;
    ~listelement()
    {
        cout<< "destructing................."<<endl;
    }
};
int main()
{
   listelement le1;
   le1.setvalue(50);
   cout<< "value of le1: "<< le1.getvalue()<<endl;
   le1.nextelement=new listelement;
   (le1.nextelement)->setvalue(100);
   cout<< "value of le1 pointed elememnt is : "<< (le1.nextelement)->getvalue()<<endl;
   delete le1.nextelement;
}
