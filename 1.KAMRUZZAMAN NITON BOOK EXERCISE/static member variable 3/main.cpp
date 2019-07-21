#include <iostream>
using namespace std;
class sample
{
    static int to;
public:
    sample()
    {
        to++;
    }
    ~sample()
    {
        to--;
    }
    static void print()
    {
        cout<< "\ntotal object: "<<to<<endl;
    }
};
int sample:: to=0;


int main()
{
    sample s1,s2,s3,s4,s5;
    sample::print();
    return 0;
}
