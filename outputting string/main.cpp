#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   string s("my name is md. hadiuzzaman");
   cout<<right<<setfill('?')<<setw(40)<<s;
    return 0;
}
