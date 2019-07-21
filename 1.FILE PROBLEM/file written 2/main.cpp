#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    ofstream file;
    file.open("student.txt");
    cout<< "what is your name? ";
    getline(cin,name);
    file<< "welcome "<<name<<endl;
    file.close();
    return 0;
}
