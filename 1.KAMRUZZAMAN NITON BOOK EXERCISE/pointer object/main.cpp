#include <iostream>

using namespace std;
class addab
{
    int a,b;
public:
    addab(int x,int y)
    {
        a=x;
        b=y;
    }
    void add_ab(int p)
    {
        cout<< "\nob["<<p<<"]:a+b="<<a+b<<endl;
    }
};

int main()
{
    addab obj[3]={addab(3,4),addab(3,5),addab(7,3)};
    addab *ptr;
    ptr=obj;
    for(int i=0; i<3; i++)
    {
        ptr->add_ab(i);
        ptr++ ;
    }

}
