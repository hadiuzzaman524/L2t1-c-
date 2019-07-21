#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <string,int> mp;
    map <string,int>::iterator it;
    mp["hadiuzzaman"]=78;
    mp["shaiduzzaman"]=98;
    mp["rakibuzzaman"]=90;
    mp.insert(make_pair("fariha sultana",98));
    mp.insert(make_pair("redoyan",67));
    mp.insert(make_pair("most ashrafi akter",100));
    for(it=mp.begin(); it !=mp.end(); it++)
    {
        cout<< it->first<< '\t'<< it->second<<endl;
    }

    return 0;
}
