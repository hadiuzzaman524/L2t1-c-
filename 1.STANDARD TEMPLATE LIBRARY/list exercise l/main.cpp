#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
   bool done =false;
   int command;
   int value;
   list<int>mylist;
   while(!done)
   {
       cout<< "i.insert p.print l.length e.erase q.quit"<<endl;
       cout<< "enter any key:";
   cin>>command;
       switch(command)
       {
       case 1:
        if(cin>>value)
            mylist.push_back(value);
        else
            done=true;
        break;
       case 2:
     list<int>mylist::iterator it;
     cout<< *it;
        cout<< "\n";

       case 3:
        cout<< "number of elements:"<< mylist.size()<<endl;
        break;
       case 4:
        mylist.clear();
        break;
       case 5:
        done=true;
        break;
       }
   }
    return 0;
}
