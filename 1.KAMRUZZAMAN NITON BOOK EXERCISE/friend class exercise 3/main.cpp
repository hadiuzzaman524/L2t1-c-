#include <iostream>
using namespace std;
class jaman;
class rakib
{
private:
    int a;
public:
    void setvalue(int x)
    {
        a=x;
    }
    void showvalue(jaman j);
};
class jaman
{
private:
    int b;
public:
    void setvalueja(int y)
    {
        y=b;
    }
    friend void rakib::showvalue(jaman j);
};
void rakib:: showvalue(jaman j)
{
    cout<< "value of rakib is: "<<a<<endl;
    cout<< "value of jaman is: "<<j.b<<endl;
}
int main()
{
    rakib r;
    jaman h;
    r. setvalue(30);
    h.setvalueja(67);
    r.showvalue(h);

    return 0;
}
