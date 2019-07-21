#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int age;
    ofstream file;
    file.open("student.txt",ios::out|ios::app);
    for(int i=1; i<=3; i++)
    {
        cout<< "what is your name?";
        getline(cin,name);
        file<< name<< '\t';
        cout<< "how old you are?";
        cin>>age;
        file<< age<<endl;
        cin.ignore();
    }
    file.close();
    return 0;
}
