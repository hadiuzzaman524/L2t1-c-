#include <iostream>
using namespace std;
class classA
{
public:
    int a,b;
    void add_AB(void)
    {
        cout<< "A+B="<<a+b<<endl;
    }
};
int main()
{
   classA a1,a2;
   a1.a=5;
   a1.b=5;
   a2=a1;
   a1.add_AB();
   a2.add_AB();
    return 0;
}
