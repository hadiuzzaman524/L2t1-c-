#include <iostream>
using namespace std;
class classA
{
    int a,b;
public:
    classA(int x,int y)
    {
        a=x;
        b=y;

    }
    int add_ab(void)
    {
        return a+b;
    }
};
void funcA(classA obj);

int main()
{
   classA ob1(5,15);
   funcA(ob1);
    return 0;
}
void funcA(classA obj)
{
    int getobjvalue;
    getobjvalue=obj.add_ab();
    cout<< "\nmultiply returned value with 5 gives:"<< getobjvalue*5<<endl;
}
