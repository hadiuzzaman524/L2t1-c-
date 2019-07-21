#include <iostream>

using namespace std;
class student
{
public:
    const int admissionfee;
    const int examfee;
    int id;
    student(int x,int y,int z)
    :admissionfee(x),examfee(y)
    {
        cout <<admissionfee<<endl;
        cout <<examfee<<endl;
        id=z;
        cout << "id: "<<id;
    }
};

int main()
{
   student jaman(10,5,2);
    return 0;
}
