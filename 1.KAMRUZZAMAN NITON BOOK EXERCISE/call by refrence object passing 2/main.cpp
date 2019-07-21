#include <iostream>
using namespace std;
class jaman
{
    int a,b;
public:
     void get(int x,int y)
    {
        x=a;
        y=b;
    }

    int print(void)
    {
       // cout<< "the value of two number is: a+b="<< a+b<<endl;
        return a+b;
    }
};
void func(jaman *ob)
{
    cout<< "value of the main function is : " << ob->print() <<endl;
   ob->get(8,7);
    cout<< "value of the func is: "<< ob->print()<<endl;
}

int main()
{
    jaman jm;
    jm.get(5,5);
    func(&jm);
    cout<< "after calling the value of main function is: "<< jm.print()<<endl;

}
