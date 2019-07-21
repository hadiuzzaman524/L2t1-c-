#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct representative
{
    string name;
    double sales;

};
inline void print(const representative v)
{
    cout<<fixed<<setprecision(2)<<left<<setw(20)<<v.name<<right<<setw(10)<<v.sales<<endl;

}
int main()
{
    representative rita,john;
    rita.name="Rita";
    rita.sales=31526;
    john.name="John";
    john.sales=65862;

    rita.sales +=1400;
    cout<< "representative          sales\n";
    cout<< "..............................................."<<endl;
    print(rita);
    print(john);
    cout<< "\n total of sales:"<<rita.sales+john.sales<<endl;

    representative *ptr=&john;
    if(john.sales<rita.sales)
        ptr=&rita;
    cout<< "\nsalsman of the month:"<<ptr->name<<endl;

    return 0;
}
