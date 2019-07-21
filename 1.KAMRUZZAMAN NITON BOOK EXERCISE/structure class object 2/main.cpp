#include <iostream>
using namespace std;
struct jaman
{
    int a;
    int b[5];
};
class A
{
private:
    jaman j1;
public:
    jaman j2;
    void print()
    { j1.a=5;
    cout<< j1.a<<endl;
        for(int i=0; i<5; i++)
        {
            cout<< j2.b[i]<< "\t";
        }
    }
};

int main()
{
   A a1;
   cout<< "enter five element for the structure member b: "<<endl;
   for(int i=0; i<5; i++)
   {
       cin>> a1.j2.b[i];
   }
   a1.print();
    return 0;
}
