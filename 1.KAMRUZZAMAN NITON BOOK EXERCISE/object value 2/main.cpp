#include <iostream>
using namespace std;
class classA
{
public:
    int a,b;
    void add(void)
    {
        cout<< "A+B="<<a+b<<endl;
    }
};
int main()
{
   classA a1,a2;
   a1.a=5;
   a1.b=7;

 a1.a=10;
  a2=a1;
 a1.add();
 a2.add();
    return 0;
}
