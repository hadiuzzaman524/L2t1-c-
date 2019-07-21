#include <iostream>

using namespace std;

int main()
{
    int digit;
    int reminder,revers=0;
    cout << "enter any number: ";
    cin>> digit;
    int temp=digit;
    while(digit>0)
    {
        reminder=digit%10;
        revers=revers*10+reminder;
        digit=digit/10;
    }
    if(revers==temp)
    {
        cout << "the number is palandrome!"<<endl;
    }

    else
        cout << "the number is not palandrome!"<<endl;
    return 0;
}
