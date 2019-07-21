#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cout << " enter two number: ";
    cin>> n>>m;
    int sum=n+m;
    cout << "the sum is : "<< sum<< endl ;
    float div=(float)n/m;
    cout << " the division is : "<< div << endl;
    int sub= n-m;
    cout << " the subtraction is : "<< sub << endl;
    int mult=m*n;
    cout<< " the multiplication is : "<< mult<<endl;

    return 0;
}
