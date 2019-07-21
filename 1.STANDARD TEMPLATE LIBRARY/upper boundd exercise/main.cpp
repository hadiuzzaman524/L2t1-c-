#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm >
using namespace std;

int main()
{
    vector <int> v;
   // vector<int>::iterator it;
    v.push_back(12);
    v.push_back(14);
    v.push_back(20);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    set<int> s(v.begin(),v.end());
    set<int>::iterator it;
    it=s.lower_bound(19);
    if(it !=s.end())
    {
        cout<< *it;
    }
    else
        cout<< "nothing"<<endl;
    //cout<< it !=s.end()?to_string(*it):"nothing"<<endl;

    return 0;
}
