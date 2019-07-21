#include <iostream>

using namespace std;
void maxminfnc(int arr[]);

int main()
{
   int x[5];
   for(int i=0; i<5; i++)
   {
       cin>>x[i];
   }
   maxminfnc(x);
}
void maxminfnc(int arr[5])
{   unsigned long maxim=arr[0];
    unsigned long minim=arr[0];
    unsigned long total=0;
    for(int i=0; i<5; i++)
    {
        total+=arr[i];
    }
    for(int i=0; i<5; i++)
    {
        if(arr[i]>maxim)
        {
            maxim=arr[i];
        }
        else if(arr[i]<minim)
        {
            minim=arr[i];
        }
    }
    cout<< total-maxim<< " "<< total-minim<<endl;
}
