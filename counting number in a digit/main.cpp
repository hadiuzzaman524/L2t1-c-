#include <iostream>

using namespace std;

int main()
{
    int num;
    int rem,rev=0;
    cout << "enter any number: ";
    cin>>num;
    int coun=0;
    while(num>0)
    {
        rem=num%10;
        rev=rev+rem;
        num=num/10;
        coun++;
    }
    cout << "total digit:" <<coun<<endl;
    cout << "sum of the digit: "<<rev<<endl;

    return 0;
}
