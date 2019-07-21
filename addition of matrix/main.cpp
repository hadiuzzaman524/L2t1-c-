#include <iostream>

using namespace std;

int main()
{
   int r,c;
   cout << "how many rows are there: ";
   cin>>r;
   cout << "how many columns are there: ";
   cin>>c;
   int a[r][c],b[r][c],result[r][c];

   cout << "enter the first matrix in row major order: ";
   for(int i=0; i<r; i++)
   {
       for(int j=0; j<c; j++)
       {
           cin>>a[i][j];
       }
   }

     cout << "enter the second matrix in row major order: ";
   for(int i=0; i<r; i++)
   {
       for(int j=0; j<c; j++)
       {
           cin>>b[i][j];
       }
   }

   for(int i=0; i<r; i++)
   {
       for(int j=0; j<c; j++)
       {
           result[i][j]=a[i][j]+b[i][j];
       }
   }
     cout << "the result is : "<<endl;
   for(int i=0; i<r; i++)
   {
       for(int j=0; j<c; j++)
       {
           cout <<" "<<result[i][j];
       }
       cout <<endl;
   }
    return 0;
}
