#include <iostream>
using namespace std;
class student
{
public:
    int id;
    float gpa;
    void display()
    {
        cout << showpoint;
        cout << "id: "<<id<<endl<<"gpa:"<<gpa<<endl;
    }
    student (int x,float y)
    {
        id=x;
        gpa=y;
    }
};

int main()
{
    student jaman(101,20);
    jaman.display();
    student orpi(103,201);
    orpi.display();
    return 0;
}
