#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
   set <int> s;
   set <int> :: iterator it;
   s.insert(1);
   s.insert(78);
   s.insert(76);
   s.insert(67);
   s.insert(8);
   s.insert(23);
   it=s.find(67);
   s.erase(it);
   for( it=s.begin(); it !=s.end(); it++)
    cout<< *it<<endl;
    return 0;
}
