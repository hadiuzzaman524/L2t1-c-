#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    set<int> s;
    set<int> :: iterator it;
    s.insert(67);
    s.insert(78);
    s.insert(99);
    s.insert(90);
    it=s.find(99);
    s.erase(it);
    for(it=s.begin(); it !=s.end(); it++)
    {
        cout<< *it<<endl;
    }
    return 0;
}
