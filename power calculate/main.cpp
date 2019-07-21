#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int sum=0,n;
    cout << "enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum=pow(i,5);
        cout << sum<<endl;

    }
    return 0;
}
