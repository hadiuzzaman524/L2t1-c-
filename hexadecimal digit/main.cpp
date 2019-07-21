#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number=0;
    cout<< "enter a hexadecimal number:"<<endl;
    cin>>hex>>number;
    cout<< "your decimal output:"<<number<<endl;
    cin.sync();
    cin.clear();
    double x1=0.0,x2=0.0;
    cout << "now enter two floating point values:"<<endl;
    cout<<"1.number";
    cin>>x1;
    cout << "2.number";
    cin>>x2;
    cout <<fixed<<setprecision(2)<< "\nthe sum of both number:"<<setw(10)<<x1+x2<<endl;
    return 0;
}
