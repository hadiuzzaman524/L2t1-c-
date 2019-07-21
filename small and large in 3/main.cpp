#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "enter three number:";
    cin >> a>>b>>c;
    if(a>b&&a>c)
    {
        cout << "the large number is "<<a<<endl;
    }
    else if(b>a&&b>c)
    {
        cout << "the large number is "<<b<<endl;
    }
    else
        cout << "the large number is "<<c<<endl;

    return 0;
}
