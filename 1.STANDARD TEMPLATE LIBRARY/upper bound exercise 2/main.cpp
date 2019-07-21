#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
   vector <int> v;
   v.push_back(12);
   v.push_back(15);
   v.push_back(20);
   v.push_back(25);
   v.push_back(45);
   vector <int>::iterator it;
   it=upper_bound(v.begin(),v.end(),25);
   cout<< distance(v.begin(),it)<<endl;
    return 0;
}
