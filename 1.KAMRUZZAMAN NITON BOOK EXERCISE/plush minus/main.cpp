#include <iostream>

using namespace std;


int n;
int main()
{

    cout<< "how many size of an array?";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int zero=0,positive=0,negative=0;
    double z1,z2,z3;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
           zero++;

        }

        else if(arr[i]>0)
        {
           positive++;

        }

        else
        {
            negative++;
        }

    }



   // cout<< "positive: "<<positive<<"negative: "<<negative<<"zero: "<<zero<<endl;
    z1=double(zero)/n;
   z2=double(positive)/n;
   z3=double(negative)/n;
   cout<< showpoint;
   cout<< z2<<endl;
   cout<< z3<<endl;
   cout<< z1<<endl;



}

