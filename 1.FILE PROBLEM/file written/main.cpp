#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("student.txt");
    file<< "my name is md hadiuzzaman. i am the student of computer science and engineering.";
    file.close();

    return 0;
}
