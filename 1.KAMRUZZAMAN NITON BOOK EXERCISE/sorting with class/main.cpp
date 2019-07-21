#include <iostream>

using namespace std;
class sortedlargest
{
private:
    int i,j,temp,getlarge,a[5];
    void getstoredarray()
    {
        for(i=0; i<5-1; i++)
        {
            for(j=0; j<5-1-i; j++)
            {
                if(a[j]<a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;

                }
            }
            cout<< "after sorting:"<<endl;
            for(i=0; i<5; i++)
                cout<< a[i] << '\t';
            cout<< endl;
        }
    }
    void  getlargestvalue(void)
    {
        getlarge=a[0];
        for(i=0; i<5; i++)
        {
            if(a[i]>getlarge)
                getlarge=a[i];
        }
        cout<< "\n\nthe largest value is:"<<getlarge;
    }
public:
     sortedlargest(void)
     {
         cout<< "enter five integer:"<<endl;
         for(i=0; i<5; i++)
            cin>>a[i];
         getstoredarray();
         getlargestvalue();
     }
};

int main()
{
    sortedlargest sl;
    return 0;
}
