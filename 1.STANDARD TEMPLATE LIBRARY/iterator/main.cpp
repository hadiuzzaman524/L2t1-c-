#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
   vector <int> vc;
   vector <int>::iterator it;
   for(int i=0; i<15; i++)
   {
       vc.push_back(i);
   }
   /*for(it=vc.begin(); it !=vc.end(); it++)
   {
       cout<< *it<<endl;
   }*/

   for(int i=0; i<vc.size(); i++)
   {
       cout<< vc[i]<<endl;
   }

   it=vc.begin();
   it++;
   cout<< *it<<endl;
    return 0;
}
