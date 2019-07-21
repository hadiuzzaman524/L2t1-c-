#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;

int main()
{
   multimap<string,int> m;
   multimap<string,int>::iterator it;
   m.insert(make_pair("jaman",67));
   m.insert(make_pair("rakib",77));
   m.insert(make_pair("habib",89));
   m.insert(make_pair("jaman",87));
   for(it=m.begin(); it !=m.end(); it++)
   {
       cout<< it->first << "\t" << it->second<<endl;
   }
    return 0;
}
