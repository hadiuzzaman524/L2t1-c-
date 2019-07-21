#include <iostream>
using namespace std;

int main()
{
    int n;
    int set=0;
    while(cin>>n&&(n) !=EOF)
   {
    int ar[n];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        int count=0;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=ar[i];
        }
        int dif=sum/n;
        for(int i=0; i<n; i++)
        {
            while(ar[i]>dif)
            {
                count++;
                ar[i]--;
            }
        }
        cout<< "Set #"<<++set<<endl;
        cout<<"The minimum number of moves is "<<count<<"."<<endl;
    }
    return 0;
}
