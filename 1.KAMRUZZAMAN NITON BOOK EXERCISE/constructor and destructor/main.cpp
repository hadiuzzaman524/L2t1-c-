#include <iostream>
using namespace std;
class sample
{
public:
    sample()
    {
        cout<< " \nmessage from constructor"<<endl;
    }

    ~sample()
    {
        cout << "this is destructor"<<endl;
    }
};
void funca(void)
{
    cout<< "creating sample object in funca()";
    sample smp;
}

int main()
{
    cout<< "\ncreating sample object in main()";
    sample smp;
    cout<< "\n\ncalling funca()\n\n";
    funca();
    cout<< "\n\nfunca() called\n\n";
    return 0;
}
