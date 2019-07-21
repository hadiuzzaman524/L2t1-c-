#include <iostream>
#include <utility>
#include <map>
#include <iterator>
using namespace std;

int main()
{
   map <string,int> pr;
   map <string,int>::iterator it;
   pr.insert(make_pair("orpita",65));
   pr.insert(make_pair("ashrafi",56));
   pr.insert(make_pair("hadiuzzaman",57));
   pr.insert(make_pair("shaiduzzaman",78));
   for(it=pr.begin(); it !=pr.end(); it++)
   {
       cout<<it->first << "\t"<<it->second<<endl;
   }
    return 0;
}
