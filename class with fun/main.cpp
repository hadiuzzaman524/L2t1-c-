#include <iostream>
using namespace std;
class student
{
public:
    int id;
    float gpa;
    void display()
    {   cout <<showpoint;
        cout<<id<<"\t"<<gpa<<endl;
    }
};

int main()
{
    student jaman,orpi;
    jaman.id=12;
    jaman.gpa=3.00;
    jaman.display();
    orpi.id=22;
    orpi.gpa=4;
    orpi.display();
    return 0;
}
