#include <iostream>

using namespace std;

int main()
{
    int digit,rem,rev=0;
    cout << "enter a digit: ";
    cin>> digit;
    while(digit>0)
    {
        rem=digit%10;
        rev=rev+rem;
       digit=digit/10;
    }
    cout << rev<<endl;


    return 0;
}
