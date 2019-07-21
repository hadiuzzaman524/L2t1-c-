#include <iostream>

using namespace std;
template <class orpi> orpi sum(orpi elements[],int size)
{
    orpi sum=0;
    int i;
    for(i=0; i<size; i++)
        sum+=elements[i];
    return sum;
}
int main()
{
  int series[]={1,2,3,4,5,5};
  int unit[]={4,5,6,7,8,9};
  cout<< "sum of the series: "<<sum(series,4)<<endl;
  cout<< "sum of the unit: "<<sum(unit,5)<<endl;
}
