#include <iostream>
using namespace std;
class sample
{
    int x,y;
public:
    sample(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<< "\nx="<<x<< "y="<<y<<endl;
    }
};

int main()
{
   sample s1(2,5),s2(67,3);
   s1.print();
   s2.print();
    return 0;
}
