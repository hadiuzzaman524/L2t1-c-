#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const int MAXCNT=10;
   float arr[MAXCNT],x;
   int i,cnt;
   cout<< "enter up to 10 number:\n (quit with a letter)";
   for(i=0; i<MAXCNT && cin>>x; i++)
    arr[i];
   cnt=i;
   cout<< "the given number:\n"<<endl;
   for(i=0; i<cnt; i++)
    cout<< setw(10)<<arr[i]<<endl;
    return 0;
}
