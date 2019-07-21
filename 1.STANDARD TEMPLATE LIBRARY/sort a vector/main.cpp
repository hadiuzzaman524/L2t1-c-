#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> vec;
    vector <int>::iterator it;
    vec.push_back(10);
    vec.push_back(39);
    vec.push_back(3);
    vec.push_back(14);
    vec.push_back(44);
    sort(vec.begin(),vec.end());
    for(it=vec.begin(); it !=vec.end(); it++)
    {
        cout<< *it<< "\t"<<endl;
    }
    return 0;
}
