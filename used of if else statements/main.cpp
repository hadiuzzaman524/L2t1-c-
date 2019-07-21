#include <iostream>
using namespace std;

int main()
{
    float x,y,min;
    cout<< "enter two different number:\n";
    if(cin>>x&&cin>>y)
    {
        if(x<y)
            min=x;
        else
            min=y;
        cout << "\n the smaller number is :"<<min<<endl;
    }
    else
    {
        cout<< " \n invalid input"<<endl;
    }
    return 0;
}
