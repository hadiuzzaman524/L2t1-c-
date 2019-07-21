#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout << "how many rows :";
    cin>>r;
    cout << "how many columns: ";
    cin>>c;
    int a[r][c];
    cout<< "enter the matrix in row major order:";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
      for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<< " " <<a[i][j];
        }
        cout <<endl;
    }
    int big=a[0][0];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(big<a[i][j])
            {
                big=a[i][j];

            }
        }
    }
    cout<<"the big number is " <<big<<endl;
    return 0;
}
