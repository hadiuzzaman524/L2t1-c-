#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "how many size of an array: ";
    cin>>n;
    int ar[n];
    for(int i=1; i<=n ;i++)
    {
        cout << "enter the element "<<i+1<<":";
        cin>>ar[i];
    }
    cout << "showing the array in oposite direction: "<<endl<<endl; ;
    for(int i=n; i>=1; i--)
    {
       cout << ar[i]<<endl;
    }
    return 0;
}
