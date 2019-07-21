#include <iostream>

using namespace std;

int main()
{
   float limit,speed,toofast;
   cout<< "\nspeed limit:";
   cin>>limit;
   cout<< "\nspeed:";
   cin>>speed;
   if((toofast=speed-limit)<10)
        cout<< "you ware lucky!"<<endl;
   else if(toofast<20)
    cout << " fine payable: 40,-.dollars"<<endl;
   else if(toofast<30)
    cout<< "fine payable:80,-.dollars"<<endl;

    return 0;
}
