#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "|"<<setw(6)<<"x"<<"|";
    cout.width(7);
    cout.fill('0');
    cout<< internal<<-123;
    return 0;
}
