#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cout << "enter the size of an array: ";
    cin>> n;
    int aray[n];
    for(int i=0; i<=n; i++)
    {   cout << " enter the element"<< i+1<< " :";

        cin>> aray[i];
    }
    for(int i=0; i<=n; i++)
    {
        cout << aray[i]<<endl;
    }
    cout << "enter the number you search: ";
    cin>> m;
    int found=1;
    int temp;
    for(int i=0; i<=n; i++)
    {
      if(m==aray[i])
      {
          temp=aray[i];
          found=i;
      }
    }
      if(found==1)
        {
            cout << " the number is not found."<<endl;
        }
        else
        {
            cout << temp <<" the number is found."<<endl;

        }
    return 0;
}
