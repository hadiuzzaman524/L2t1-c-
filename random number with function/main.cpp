#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

bool setrand=false;
inline void init_random()
{
    if(!setrand)
    {
        srand((unsigned int)time(NULL));
        setrand=true;
    }
}
inline double myrandom()
{
    init_random();
    return (double)rand()/(double)RAND_MAX;

}
inline int myrandom(int start,int end)
{
    init_random();
    return (rand()%(end+1-start)+start);
}

int main()
{
    int i;
    cout<< "5 random numbers between 0.0 and 1.0:"<<endl;
    for(i=0; i<5; i++)
        cout<<setw(10)<<myrandom();
    cout<<endl;
    cout<< "\nand now 5 integer random numbers between -100and+100:"<<endl;
    for(i=0; i<5; i++)
        cout<<setw(10)<<myrandom(-100,+100);
    cout<<endl;
    return 0;
}
