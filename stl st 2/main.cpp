#include <iostream>
#include <iterator>
#include <set>
#include <utility>
using namespace std;

int main()
{
   set <string> s;
   set <string> :: iterator it ;
   s.insert("hadiuzzaman");
   s.insert("shaiduzzaman");
   s.insert("rakibuzzaman");
   pair <set<string> ::iterator,bool> p;
   p=s.insert("hadiuzzaman");

   if(p.second==false)
        cout<< "can not inserted"<<endl;
   else
    cout<< "inserted"<<endl;


    return 0;
}
