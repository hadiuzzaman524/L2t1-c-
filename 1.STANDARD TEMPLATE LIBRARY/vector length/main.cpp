#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector <int> vc(5,2);
    vc.push_back(11);
    for(int i=0; i<vc.size();i++)
    {
        cout<< vc[i]<<endl;
    }

    return 0;
}
