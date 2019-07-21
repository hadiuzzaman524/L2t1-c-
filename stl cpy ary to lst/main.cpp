#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
   int ar[5]={1,3,5,16,9};
   list <int> ls(ar,ar+5);
   list <int> :: iterator it;
   for(it=ls.begin(); it !=ls.end(); it++)
   {
       cout<< *it<< '\t';
   }
   cout<<endl;
   it=find(ls.begin(),ls.end(),5);
   cout<< *it<<endl;
   ls.insert(it,89);
     for(it=ls.begin(); it !=ls.end(); it++)
   {
       cout<< *it<< '\t';
   }


    return 0;
}
