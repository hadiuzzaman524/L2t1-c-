#include <iostream>
#include <set>
using namespace std;

int main()
{   multiset<int>s;
    multiset<int>::iterator it;
    s.insert(77);
    s.insert(78);
    s.insert(89);
    s.insert(86);
    s.insert(86);
    for(it=s.begin(); it !=s.end(); it++)
    {
        cout<< *it<<endl;
    }

    return 0;
}
