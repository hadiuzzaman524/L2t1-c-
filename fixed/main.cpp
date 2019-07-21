#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   float num1,num2;
   cout << " enter two number: ";
   cin >> num1 >> num2;

    cout << showpoint;
    cout << fixed;          // used for print space before point.
    cout << setprecision(3);
    float sum=num1+num2;
    cout << "the sum is : "<< sum;
    cout << endl;
    return 0;
}
