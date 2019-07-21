#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <string> s;
    s.push("md hadiuzzaman");
    s.push("md shaiduzzaman");
    s.push("md rakibuzzaman");
    while( !s.empty())
    {
         cout<< s.top()<<endl;
         s.pop();
    }

    return 0;
}
