#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
enum acc_type{current=1,saving=2,fixed=3};
class acc
{
private:
    int acc_id;
    char name[24];
    acc_type type;
public:
    acc();
    acc(int id,char *name,acc_type t);
    acc(ifstream &fin);
    void display(void);
    ~acc()
    {

    }
};
acc::acc()
{
    int type;
    cout<< endl<< "enter account id:#";
    cin>>acc_id;
    cout<<endl<< "enter the name of account holder: ";
    cin>>name;
    cout<<endl<< "enter account type:(current=1,saving=2,fixed=3):";
    cin>>type;
    acc::type=(acc_type)type;

}
acc::acc(int id,char *name,acc_type t)
{
    acc_id=id;
    strcpy(acc::name,name);
    type=t;
}
acc::acc(ifstream &fin)
{
    fin.open("jaman.txt",ios::in);
    if(!fin)
    {
        cout<< endl<< "error:file is not found."<<endl;
        return;
    }
    fin>>acc_id;
    fin>>name;
    int type;
    fin>>type;
    acc::type=(acc_type)type;

}
void acc:: display()
{
    static int out_no=1;
    cout<< endl<< "output#"<<out_no++;
    char *type_name[]={ "","current","saving","fixed"};
    cout<< endl<<"account id #:"<<acc_id<<endl;
    cout<< "Name: "<<name<<endl;
    cout<< "account type: "<< type_name[type]<<endl;
}
int main()
{
    ifstream fin;
    acc a1,a2(2,"jaman",saving),a3(fin);
    a1.display();
    a2.display();
    //a3.display();
}
