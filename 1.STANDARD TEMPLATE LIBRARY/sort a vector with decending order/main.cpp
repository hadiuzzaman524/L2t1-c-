#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
bool myfunction(int a,int b)
{
    return (a>b);
}
using namespace std;

int main()
{
   vector <int> vec;
   vector <int>::iterator it;
   vec.push_back(10);
   vec.push_back(19);
   vec.push_back(3);
   vec.push_back(44);
   vec.push_back(66);
   sort(vec.begin(),vec.end(),myfunction);
   for(it=vec.begin();it !=vec.end(); it++)
   {
       cout<< *it<< "\t"<<endl;
   }
    return 0;
}
