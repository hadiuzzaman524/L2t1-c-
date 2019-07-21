#include <iostream>
using namespace std;
class condes
{
public:
    condes()
    {
        cout<< "\tconstructing...."<<endl;
    }
    ~condes()
    {
        cout<< "\tdestructing....."<<endl;
    }
};

void sample(void)
{
    cout<< "\n\n\tobject creating in sample function()"<<endl;
    condes sf;
    cout<< "\n\t\treturn to main() from sample function\t"<<endl;
}
int main()
{
   cout<< "\nobject creating in main()"<<endl;
   condes main;
   cout<< "\n\tcalling sample function()"<<endl;
   sample();
   cout<< "\nend of the main function"<<endl;

    return 0;
}
