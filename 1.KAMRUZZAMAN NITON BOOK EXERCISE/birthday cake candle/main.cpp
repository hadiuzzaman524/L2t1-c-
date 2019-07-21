#include <iostream>

using namespace std;
int birthday(int n,int arr[]);
int m,n;
int main()
{
    cin>>m;
    int x[m];
    for(int i=0; i<m; i++)
    {
        cin>>x[i];
    }
    int z=birthday(m,x);
    cout<< z<<endl;

}
int birthday(int n,int arr[])
{
 int coun=0;
   int maxi=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>maxi)
        {
             maxi=arr[i];
        }

    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==maxi)
            coun++;
    }
    return coun;
}

