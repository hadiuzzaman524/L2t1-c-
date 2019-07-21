#include <iostream>
#include <string>
#include <utility>>
#include <iterator>
using namespace std;

int main()
{
    pair <string,int> p;
    //p.first= "dipta";
   // p.second=65;
   p=make_pair("hadiuzzaman",65);
    cout<< p.first << "\t"<<p.second<<endl;

    return 0;
}
