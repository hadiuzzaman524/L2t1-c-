#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <float> mylist;
    list <float>::iterator it;
    mylist.push_back(12);
    mylist.push_back(76);
    mylist.push_front(87);
    mylist.push_front(00);
    for(it=mylist.begin(); it !=mylist.end(); it++)
    {
        cout<< *it <<endl;
    }
    return 0;

}
