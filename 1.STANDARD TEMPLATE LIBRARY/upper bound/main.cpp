#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
   vector<int> v;
   vector<int>::iterator it;
   v.push_back(19);
   v.push_back(33);
   v.push_back(40);
   v.push_back(50);
   v.push_back(60);
    it=upper_bound(v.begin(),v.end(),19);
    cout<< *it<<endl;
    return 0;
}
