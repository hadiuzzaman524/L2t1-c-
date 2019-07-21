#include <iostream>

using namespace std;

int main()
{
    int num;
    int rem,rev=0;
    cout << "enter any number: ";
    cin>>num;
    while(num>0)
    {
       rem=num%10;
       rev=rev*10+rem;
       num=num/10;
    }
    cout << rev;

    return 0;
}
