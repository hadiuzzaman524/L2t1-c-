#include <iostream>

using namespace std;
void display(int *num)
{
    *num=20;
}

int main()
{
    int x=10;
    cout << "before call x"<<x<<endl;
    display(&x);
    cout << "after call: "<<x<<endl;
    return 0;
}
