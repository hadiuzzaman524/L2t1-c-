#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<< "enter any number:";
    cin>> n;
    for(int i=1; i<=n; i++)
    {
      if(i%1==0&&i%n==0)
      {
          cout << "prime"<<endl; ;
      }
      else
        cout << "not prime"<<endl;
    }


    return 0;
}
