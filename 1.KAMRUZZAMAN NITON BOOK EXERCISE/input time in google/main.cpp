#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    long sec;
    time(&sec);
    string tm=ctime(&sec);
    cout<< tm<<endl;
    return 0;
}
