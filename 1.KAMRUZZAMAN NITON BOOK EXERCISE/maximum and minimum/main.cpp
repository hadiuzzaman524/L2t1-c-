#include <iostream>
void summaxmin(int arr[]);
using namespace std;
int x[5];
unsigned long int summax=0,summin=0;
int main()
{

    for(int i=0; i<5; i++)
    {
        cin>>x[i];
    }
   summaxmin(x);

}
void summaxmin(int arr[5])
{
   for(int i=1; i<5; i++)
    {
        summax+=arr[i];
    }
    cin.sync();
    for(int i=0; i<5-1; i++)
    {
        summin+=arr[i];
    }
    cout<< summax<<" "<<summin<<endl;
}
