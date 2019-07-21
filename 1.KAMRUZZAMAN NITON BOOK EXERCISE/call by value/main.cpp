#include <iostream>
using namespace std;
class test
{
    int a,b;
public:
    void setab(int x,int y)
    {
        a=x;
        b=y;
    }
    int getatimeb()
    {
        return a*b;
    }
};
int atimebtimes10(test t)
{
    t.setab(10,10);
    return (t.getatimeb()*10);
}
int main()
{
    test ts;
    ts.setab(15,15);
    cout<< "\n a*b*10="<< atimebtimes10(ts);
    cout<< "\na*b="<<ts.getatimeb();
    return 0;
}
