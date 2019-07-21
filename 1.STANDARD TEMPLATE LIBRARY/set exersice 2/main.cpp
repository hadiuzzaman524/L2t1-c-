#include <iostream>
#include <set>
#include <utility>
#include <iterator>
using namespace std;

int main()
{
    set<string>s;
    set<string>::iterator it;
    s.insert("jaman");
    s.insert("orpita");
    s.insert("ashrafi");
    pair<set<string>::iterator,bool > p;
    p=s.insert("arnob");
    if(p.second==false)
    {
        cout<< "can not insert!"<<endl;
    }
    else
    {
        cout<< "inserted!"<<endl;
    }
    return 0;
}
