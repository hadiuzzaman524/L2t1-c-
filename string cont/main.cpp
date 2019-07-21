#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string jaman("i have learn something new again!"),name,star(50,'*'),name1;
    cout << "enter one line:";
    getline(cin,name);
    cout << "enter another line:";
    getline(cin,name1);
    cout <<star<<endl;

    cout <<jaman<<endl;
    cout << name<<endl;
    cout << name1<<endl;
    cout <<star<<endl;

    return 0;
}
