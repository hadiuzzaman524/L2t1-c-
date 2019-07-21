#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;

int main()
{
   map <string,int> m;
   map <string,int> ::iterator it;

   m["jaman"]=01;
   m["rakib"]=07;
   m["habib"]=55;
   m["orpi"]=78;
   m["oshin"]=53;
   m.insert(make_pair("fariha",5));
   m.insert(make_pair("bonna",44));
   m.insert(make_pair("kuasha",77));
   cout<< m["fariha"]<<endl;
   for(it=m.begin(); it !=m.end(); it++)
   {
       cout<< it->first << " \t"<<it->second<<endl;
   }

    return 0;
}
