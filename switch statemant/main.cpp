#include <iostream>

using namespace std;

int main()
{
    int digit;
    cout << "enter a digit:(1-5) ";
    cin >> digit;
    switch(digit)
{
case 0:
    cout << "zero";
    break;
case 1:
    cout << "one";
    break;
case 2:
    cout << "two";
    break;
case 3:
    cout << "three";
    break;
case 4:
    cout << "four";
    break;
case 5:
    cout << "five";
    break;
default:
    cout << "not valid number";


}
    return 0;
}
