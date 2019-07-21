#include <iostream>
using namespace std;
class student
{
public:
    char name[40];
    int id;
    int bangla,english,math,chemistry,physics;
    double avg;
    void display()
    {
        cout << showpoint;
        cout<<"name:"<<name<<endl;
        cout<<"bangla:"<<bangla<<endl<<"english:"<<english<<endl<< "math:"<<math<<endl<< "chemistry:"<<chemistry<<endl<<"physics:"<<physics<<endl;
        cout<< "average:"<<avg<<endl;
    }
    student()
    {
        cout<< "enter your name:";
        cin>>name;
        cout<<"enter bangla marks:";
        cin>>bangla;
        cout<< "enter english marks:";
        cin>>english;
        cout<< "enter math marks: ";
        cin>>math;
        cout<< "enter chemistry marks:";
        cin>>chemistry;
        cout << "enter physics marks:";
        cin>>physics;

        avg=(bangla+english+math+chemistry+physics)/5;
    }
};

int main()
{
    student jaman;
    jaman.display();
    //oshin.display();
   return 0;
}
