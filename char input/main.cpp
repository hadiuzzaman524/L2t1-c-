#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number=' ';
    cout << "the white space code is as follows:"<<number<<endl;
    char ch;
    string jaman="\nplease enter a character followed by<return>:";
    cout<<jaman;
    cin>>ch;
    number=ch;
    cout << "the character "<<ch<< "has code"<<number<<endl;
    cout << uppercase<<ch<<"has code"<<number<<endl;
    cout<<uppercase<< " octal decimal hexadecimal\n" <<oct<<setw(8)<<number<<dec<<setw(8)<<number<<hex<< setw(8)<<number<<endl;


    return 0;
}
