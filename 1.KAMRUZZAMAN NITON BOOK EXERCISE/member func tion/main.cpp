#include <iostream>

using namespace std;
class sample
{
public:
    void funa()
    {
        cout<< "this is the function of funa(0)";

    }
    void funb()
    {
        cout<< "\nthis is the function of funb()"<<endl;
        funa();
    }
};

int main()
{
   sample samp;
   samp.funa();
   samp.funb();
    return 0;
}
