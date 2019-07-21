#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "enter any number: ";
    cin>> i;
    int factorial=1;
    for(int j=1; j<=i; j++)
    {
        factorial=j*factorial;
    }
    cout << "the factorial number is: "<<factorial<<endl;
    return 0;
}
