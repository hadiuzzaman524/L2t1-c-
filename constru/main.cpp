#include <iostream>
using namespace std;
class student
{ public:
	int a,b;
	float gpa;
	char name[19];
	void display()
	{
		cout << "bangla:"<<a<<"english: "<<b<<"name:"<<name<< "gpa:"<<gpa<<endl;

	}
	student()
	{
			cout<<"enter bangla:";

	cin>>a;
	cout<< "enter english";
	cin>>b;
	cout<< "enter your name:";
	cin>>name;
	cout<< "enter your gpa:";
	cin>>gpa;
	}

};
int main(int argc, char** argv)

{
	student jaman,rakib;

    jaman.display();
    rakib.display();

	return 0;
}
