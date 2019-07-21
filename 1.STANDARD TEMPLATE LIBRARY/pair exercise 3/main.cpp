#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    vector <pair<string,int> > v;
    v.push_back(make_pair("jaman",67));
    v.push_back(make_pair("ashrafi",78));
   for(int i=0; i<v.size(); i++)
    {
        cout<< v[i].first<< "\t"<< v[i].second<<endl;
    }

    return 0;
}
