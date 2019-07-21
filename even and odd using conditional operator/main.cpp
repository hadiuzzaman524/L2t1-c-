#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << " enter any number: ";
    cin>> num;
    (num%2==0)?cout<<num<<" is even": cout << num<<" is odd"<<endl;

    return 0;
}
