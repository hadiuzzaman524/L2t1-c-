#include <iostream>
#include <utility>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
   vector <pair <string,int> > v;
     vector <pair <string,int> > :: iterator it;
   v.push_back(make_pair("shaiduzzaman",03));
   v.push_back(make_pair("rakibuzzaman",65));
   v.push_back(make_pair("ashrafi akter",29));
    for(it=v.begin(); it !=v.end(); it++)

   cout<<it->first<< '\t'<<it->second<<endl;

    return 0;
}
