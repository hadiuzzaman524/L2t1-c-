#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "enter two number:";
    cin>> a>> b;
    if(a>b)
    {
        cout << "the first number is big"<<endl;
    }
    else if(b>a)
    {
        cout << "the second number is big"<<endl;
    }
    else
    {
        cout << "the two number is equal"<<endl;
    }
    return 0;
}
