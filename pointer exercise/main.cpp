#include <iostream>
#include <string>
using namespace std;
float x=10.7;
int main()
{
    float &rx=x;
    rx *=2;
    cout<< "x:"<<x<<endl;
    cout<< "rx:"<<rx<<endl;
    const float& cref=x;
    cout<< "cref"<<cref<<endl;
    const string str="i am a constant string.";
    const string &text=str;
    cout<< text<<endl;
    return 0;
}
