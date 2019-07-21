#include <iostream>
using namespace std;
class sample
{
private:
    void add()
    {
        cout << "\nx+y="<< x+y<<endl;
    }
    int x,y;
public:
    sample(int a,int b)
    {
        x=a,y=b;
        add();
    }
};

int main()
{
    sample samp(1000,2000);
    return 0;
}
