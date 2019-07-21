#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("As time by ..........."),s2("goes");
    s1.insert(11,s2,0,4);
    cout<<s1<<endl;
    s1.erase(10);
    cout<<s1<<endl;
    s1.replace(3,4,"Bill");
    cout<<s1<<endl;
    return 0;
}
