#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{   int ar[7]={2,4,5,3,43,56};
    list <int> mylist(ar,ar+6);
    list <int>::iterator it;
    for(it=mylist.begin(); it !=mylist.end(); it++)
    {
        cout<< *it<<"\t";
    }
    cout<<endl;
    it=find(mylist.begin(),mylist.end(),3);
    cout<< *it<<endl;
    mylist.insert(it,88);
      for(it=mylist.begin(); it !=mylist.end(); it++)
    {
        cout<< *it<<"\t";
    }

    return 0;
}
