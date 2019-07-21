#include <iostream>
#include <string>
using namespace std;

string jaman("enter some text:"),line(50,'*');
int main()
{
    string text,orpi;
   cout<< line<<endl;
   cout<<jaman;
   while(true)
   {

     getline(cin,text);
     if(text.size()==0)
        break;
   orpi=text+ '\n'+orpi;
   }

   cout<< orpi<<endl;
    return 0;
}
