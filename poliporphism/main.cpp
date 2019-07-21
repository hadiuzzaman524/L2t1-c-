#include <iostream>
using namespace std;

class person
{
public:
    void display()
    {
        cout << "i am a student."<<endl;
    }
};
class student: public person
{
public:
    void display()
    {
        cout << " i am a boy."<<endl;
    }
};
class teacher:public person
{
public:
    void display()
    {
        cout << "i am a teacher."<<endl;
    }
};
int main()
{
    teacher t;
    student s;
    person p;

    t.display();
    s.display();
    p.display();

    return 0;
}
