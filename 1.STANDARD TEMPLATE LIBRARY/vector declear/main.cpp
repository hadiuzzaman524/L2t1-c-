#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
   vector <int> vc;
   vc.push_back(10);
   vc.push_back(20);
   cout<< vc[1]<<endl;
   vc[0]=200;
   cout<< vc[0]<<endl;
    return 0;
}
