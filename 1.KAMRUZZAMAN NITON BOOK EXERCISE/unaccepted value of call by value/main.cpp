#include <iostream>
using namespace std;
class test
{
    int *a;
public:
    test(int x)
    {
        a=new int;
        *a=x;
    }
    int geta()
    {
        return *a;
    }
    ~test()
    {
        delete a;
        cout<< "jaman"<<endl;
    }
};
int apow2(test t)
{
    return (t.geta()*t.geta());

}
int main()
{
    test ts(10);
    cout<< "a^2="<<apow2(ts);
    cout<< "\n"<<ts.geta();

    return 0;
}
