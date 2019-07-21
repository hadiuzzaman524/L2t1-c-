#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    map <string,int> m;
    map <string,int>:: iterator it;
    m.insert(make_pair("hadiuzzaman",45));
    m.insert(make_pair("shaiduzzaman",12));
    m["rakibuzzaman"]=1;
    for(it=m.begin(); it !=m.end(); it++)
        cout<< it->first <<'\t'<<it->second<<endl;
    return 0;
}
