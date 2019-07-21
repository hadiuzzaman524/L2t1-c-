#include <iostream>
using namespace std;
class sample
{
public:
    static int to;
    static void print()
    {
        cout<< "total object: "<<to<<endl;
    }
};
int sample::to=0;

int main()
{
   sample::to=10;
   sample::print();
    return 0;
}
