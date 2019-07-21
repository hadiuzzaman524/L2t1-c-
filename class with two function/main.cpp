#include <iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout<<showpoint;
        cout << "id:"<<id<<endl<<"gpa: "<<gpa<<endl;
    }
    void setvalue(int x,int y)
    {
        id=x;
        gpa=y;
    }
};

int main()
{
    student jaman,orpi;
    jaman.setvalue(12,3.02);
    jaman.display();
    orpi.setvalue(25,2.6);
    orpi.display();
    return 0;
}
