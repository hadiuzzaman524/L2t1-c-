#include <iostream>
using namespace std;
class test
{
private:
    int x;
public:
    void valofx(int a)
    {
        x=a;
    }
    int getx()
    {
        return x;
    }
};
void pow2ofa(test *);



int main()
{
   test ts;
   ts.valofx(10);
   cout<< "\nbefore function calling value of x is:"<<ts.getx()<<endl;
   pow2ofa(&ts);
   cout<< "after function calling value of x is : "<< ts.getx()<<endl;
    return 0;
}
void pow2ofa(test *t)
{
    t->valofx(t->getx()*t->getx());
}
