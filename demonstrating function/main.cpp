#include <iostream>
#include <string>
using namespace std;
bool getclient(string &name,long &nr);
void putclient(const string &name,const long &nr);

int main()
{
    string clientname;
    long clientnr;
    cout<< "\n to input and output client data\n"<<endl;
    if(getclient(clientname,clientnr))
    {
      putclinet(clientname,clientnr);
    }
else
        cout<< "invalid input!"<<endl;
    return 0;
}
bool getclient(string name, long &nr)
{
    cout<< "\nto input client data!\n name:";
    if(!getline(cin,name))
        return false;
    cout<< "number:";
    if(!cin>>nr)
        return false;
    return true;
}
void putclient(const string &name,const long &nr)
{
    cout<< "\n........client data.........\n";
    cout<<"\nname:"<<name<<endl;
    cout<< "\nnumber:"<<nr<<endl;
}
