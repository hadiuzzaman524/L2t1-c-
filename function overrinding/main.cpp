#include <iostream>

using namespace std;
class person
{
public:
    void display()
    {
        cout << " faruk"<<endl;
    }

};
class student:public person
{
public:
    void display()
    {
        cout << " i am a amjad"<<endl;
    }
};

int main()
{
    person rahat;
    //student.person rahat;
    rahat.display();
    rahat.display();
    return 0;
}
