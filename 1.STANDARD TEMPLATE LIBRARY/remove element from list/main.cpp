#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    int ar[8]={2,4,5,6,7,8,3};
    list <int> mylist(ar,ar+7);
    list <int>::iterator it;
    it=find(mylist.begin(),mylist.end(),5);
    mylist.erase(it);
    for(it=mylist.begin(); it !=mylist.end(); it++)
    {
        cout<< *it<< "\t";
    }

    return 0;
}
