#include <iostream>
using namespace std;
class overload
{
    public:
    void add(int a,int b)
    {
        cout << a+b<<endl;
    }
    void add(int a,int b,int c)
    {
        cout <<a+b+c<<endl;
    }
    void add()
    {
        cout << "nothing"<<endl;
    }

};

int main()
{
    overload riyad;
    riyad.add(10,20);
    riyad.add(10,20,30);
    riyad.add();
    return 0;
}
