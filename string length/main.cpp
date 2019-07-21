#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str1="Md.";
    string str2="Hadiuzzaman";
    string str3;
    str3=str1;
    cout << "str3:"<<str3<<endl;
    str3=str1+str2;
    cout << "str3:"<<str3<<endl;
    int length=str3.size();
    cout << "the length of the string:"<<length<<endl;
    return 0;
}
