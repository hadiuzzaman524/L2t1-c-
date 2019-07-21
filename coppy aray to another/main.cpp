#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "how many size of an array: ";
    cin>>n;
    int mya[n];
    for(int i=0; i<n; i++)
    {
        cout << "enter the element "<<i+1<<":";
        cin>> mya[i];
    }
    int myb[n];
    for(int i=0; i<n; i++)
    {
        int temp=mya[i];
        mya[i]=myb[i];
        myb[i]=temp;
        cout << myb[i]<<endl;
    }
    return 0;
}
