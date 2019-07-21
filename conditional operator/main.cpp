#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "enter two number: ";
    cin >> a>> b;
    int maxi=(a>b)?a:b;
    cout << "the big number is : " <<maxi;
    return 0;
}
