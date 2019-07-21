#include <iostream>
#include <map>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
   map <string,int> mp;
   map <string,int>::iterator it;
   mp["jaman"]=12;
   mp["rakib"]=45;
   mp["ashrafi"]=67;
   mp.insert(make_pair("orpta",78));
   for(it=mp.begin(); it !=mp.end(); it++)
   {
       cout<< it->first<< "\t"<< it->second<<endl;
   }

    return 0;
}
