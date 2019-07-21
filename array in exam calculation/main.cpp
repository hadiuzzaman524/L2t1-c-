#include <iostream>

using namespace std;

int main()
{
    int half[5];
    int full[5];

    cout << "enter your half yearly examination marks:";

    for(int i=0; i<5; i++)
    {
        cout << "enter marks for roll: "<<i+1;
        cin>> half[i];
    }

    cout << "enter the marks for final year examination:";
    for(int i=0; i<5; i++)
    {
        cout << "enter marks for roll: "<<i+1;
        cin>> full[i];
    }
    int total[5];

    for(int i=0; i<5; i++)
    {
        cout << "total marks for student:"<<i+1;
        total[i]=half[i]+full[i];
        cout<<total[i]<<endl;
    }
    return 0;
}
