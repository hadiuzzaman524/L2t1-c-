#include <iostream>
using namespace std;
class sample
{
    static int x,y;
public:
    sample(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<< "x= "<<x<< "y= "<< y<<endl;
    }
};
int sample::x;
int sample :: y;
int main()
{
   sample s1(1,3),s(100,29);
   s.print();
   s1.print();

    return 0;
}
