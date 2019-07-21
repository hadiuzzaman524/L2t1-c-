#include <iostream>

using namespace std;

int main()
{
  int n;

  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
      cin>>arr[i];
  }
  int res[n];

  for(int i=0; i<n; i++)
  { if (arr[i] % 5 > 2 && !(arr[i] < 38))
                    res[i] = arr[i] + (5-arr[i]%5);
                else
                    res[i] = arr[i];
  }
  for(int i=0; i<n; i++)
  {
      cout<< res[i]<<endl;
  }
}
