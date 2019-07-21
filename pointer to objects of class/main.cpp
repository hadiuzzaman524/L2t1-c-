#include "Account.h"
bool getAccount(Account *pAccount);

int main()
{
    Account current1,current2,*ptr=&current1;
    ptr->init("cheer,mary",325698,99.215);
    ptr->display();

    *ptr=current2;
    if(getAccount(ptr))
        ;//ptr->display();
    else
        cout<< "invalid input!"<<endl;


    return 0;
}
bool getAccount(Account *pAccount)
{
    string name,line(50,'*');
    unsigned long nr;
    double startcapital;
    cout<<line<<endl;
    cout<<"enter data for a new account:\naccount holder:";
    if( !getline(cin,name)||name.size()<=1)
        return false;
    else
        cout<< "account number:";
    cin>>nr;
        cout<< "starting capital:";
     cin>>startcapital;


    pAccount->init(name,nr,startcapital);
    pAccount->display();
    return true;

}
