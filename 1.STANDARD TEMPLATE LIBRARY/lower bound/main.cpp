#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(22);
    v.push_back(24);
    v.push_back(40);
    v.push_back(55);
    v.push_back(67);
    v.push_back(76);
    vector <int>::iterator it;
    it=lower_bound(v.begin(),v.end(),56);
    cout<< *it<<endl;
    cout<< distance(v.begin()+1,it)<<endl;
    return 0;
}
