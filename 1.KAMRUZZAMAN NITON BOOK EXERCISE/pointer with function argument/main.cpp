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
        cout<< "\nobj["<<p+1<< "]:a+b= "<<a+b<<endl;
    }
};
void print(addab *ob);
int main()
{
    addab obj[3]={addab(2,4),addab(7,4),addab(9,9)};
    print(obj);
    return 0;
}
void print(addab *ob)
{
    for(int i=0; i<3; i++)
    {
        ob->add_ab(i);
        ob++;
    }
}
