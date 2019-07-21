#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> v; //v={1, 4, 5, 6, 7, 8, 23, 45, 67, 89, 90, 100};
    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(10);
    v.push_back(15);
    bool ans=binary_search(v.begin(),v.end(),66);
    if(ans)
        cout<< "found"<<endl;
    else
        cout<< "not found"<<endl;
    return 0;
}
