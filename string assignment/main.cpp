#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void starttoupper(string&);

int main()
{
   string text("text with assignments\n");
   starttoupper(text);
   cout<< text<<endl;
   starttoupper(text="flowers");
   cout<< text<<endl;
   starttoupper(text += " cheer you up!\n");
   cout<< text<<endl;
    return 0;
}
void starttoupper(string &str)
{
    int len=str.size();
    for(int i=0; i<len; i++)
        str[i]=toupper(str[i]);
}
