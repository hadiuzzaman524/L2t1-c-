#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x=12;
    cout<< "by default:"<<x<<endl;
    cout << showpoint<<x<<endl;
    cout <<setprecision(2);
    cout<<fixed;
    cout<<x<<endl;
    cout << scientific<<x<<endl;
    return 0;
}
