#include <iostream>
using namespace std;

class mess
{
public:
    int amount;
    string name;
    int advance;
    int due;


    void print()
    {
       cout<< "name:"<<name<<endl;
       cout<< "total amount:"<<amount<<endl;
       cout<< "advance:"<<advance<<endl;
       cout<< "due:"<<due<<endl;

    }
    void jaman()
    {

    cout<< "enter total amount:";
    cin>>amount;
    cin.sync();
    cout<< "enter your name:";
    getline(cin,name);
    cout<< "enter advance amount:";
    cin>>advance;
    due=amount-advance;
    }
};

int main()
{
    mess konok,sohan;
    konok.jaman();
    konok.print();


    return 0;
}
