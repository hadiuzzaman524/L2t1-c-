#include <iostream>
#include <string>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <float> mylist;
    list <float>::iterator it;
    mylist.push_back(15);
    mylist.push_back(56);
    mylist.push_back(67);
    mylist.push_front(4);
    mylist.push_front(6);
    mylist.reverse();
    for(it=mylist.begin(); it !=mylist.end(); it++)
    {
        cout<< *it<<endl;
    }

    return 0;
}
