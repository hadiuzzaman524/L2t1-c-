#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{   int n;
    cout<< "how many size in your array:"<<endl;
    cin>> n;
   int a[n];
   for(int i=0; i<n; i++)
   {
       cin>> a[i];

   }
   cout<< endl;
   cout<< "before sorting:"<<endl;
   for(int i=0; i<n; i++)
   {
       cout<< a[i]<< '\t';
   }
   cout<< endl;
   cout<< "AFTER SORTING:"<<endl;
   for(int i=0; i<n-1; i++)
   {
       for(int j=0; j<n-1-i; j++)
       {
           int temp;
           if(a[j]<a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }

       }
   }
   cout<< "decanding order:"<<endl;
   for(int i=0; i<n; i++)
   {
       cout<< a[i]<< '\t';
   }
   cout<<endl;
   cout<< "acanding order:"<<endl;
   for(int i=n-1; i>=0; i--)
   {
       cout<< a[i]<< '\t';
   }
   cout<< endl;
    return 0;
}
