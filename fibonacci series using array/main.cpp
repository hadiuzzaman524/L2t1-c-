#include <iostream>

using namespace std;

int main()
{
    int fb1=0,fb2=1,fb3;
    int limit;
    cout<< "enter the limit of an array: ";
    cin>> limit;
    int ara[limit];
    ara[0]=0;
    ara[1]=1;
    int c=2;
    for(c=2; c<=limit; c++)
    {
        fb3=fb1+fb2;
        fb1=fb2;
        fb2=fb3;
        ara[c]=fb3;

    }
    for(int i=0; i<=limit; i++)
    {
        cout<< ara[i]<<"\t";
    }


    return 0;
}
