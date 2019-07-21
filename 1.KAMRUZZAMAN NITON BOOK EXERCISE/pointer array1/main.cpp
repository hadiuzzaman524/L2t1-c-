#include <iostream>

using namespace std;

int main()
{
    int *ptr=new int[40];
    for(int i=0; i<5; i++)
    {
        *(ptr+i)=10+i;
        cout<< *(ptr+i)<<endl;
    }
}
