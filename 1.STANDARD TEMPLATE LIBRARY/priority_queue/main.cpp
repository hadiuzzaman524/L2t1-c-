#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    priority_queue <string> s;

    s.push("hadiuzzaman");
    s.push("ashrafi akter");
    s.push("fariha sultana");
    s.push("jaman");
    while(!s.empty())
    {
        string x;
        x=s.top();
        cout<< x<<endl;
        s.pop();
    }
    return 0;
}
