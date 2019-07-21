#include <iostream>
using namespace std;
class listelement
{
private:
    int i;
public:
    void setvalue(int x)
    {
        i=x;
    }
    int getvalue()
    {
        return i;
    }
    listelement *nextelement;
};
int main()
{
   listelement le1,le2;
   le1.setvalue(50);
   cout<< "value in le1 is: "<< le1.getvalue()<<endl;
   le2.setvalue(10);
   cout<< "value of len2 is: "<< le2.getvalue()<<endl;
   le1.nextelement=&le2;
   cout<< "value of le2 is: "<< (le1.nextelement)->getvalue()<<endl;
}
