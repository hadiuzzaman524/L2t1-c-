#include <iostream>
#include <string>
using namespace std;

string header= ".............demonstrates unformatted input............";
int main()
{
    string word,rest;
    cout<<header<< "\npress <return> to go on"<<endl;
    cout<< "\n please enter a sentence with several words!"<< "\nend with<!>and <return>."<<endl;
    cin>>word;
    getline(cin,rest,'!');
    cout << "\n the first word:"<<word<< "\nremaining text:"<<rest<<endl;
    return 0;
}
