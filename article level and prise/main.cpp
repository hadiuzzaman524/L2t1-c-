#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string level;
  double price;
    cout<< "\nplease enter an article level:";
    cin>>setw(16);
    cin>>level;
    cin.sync();
   cin.clear();
    cout << "\nenter the price of the article:";
    cin>>price;
    cout<<fixed<<setprecision(2)<< "\narticle:"<< "\nlevel:"<<level<< "\nprise:"<<price<<endl;
    return 0;
}
