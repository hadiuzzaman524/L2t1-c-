#include <iostream>

using namespace std;
int &largevallue(int array[],int n)
{
    int i,currentindex=0;
    for(i=1; i<n; i++)
    {
        if(array[currentindex]<array[i])
            currentindex=i;
        return array[currentindex];
    }
}

int main()
{
    int iarray[10]={22,34,53,54,3,56,76,85,98};
    cout<< "large element:"<< largevallue(iarray,10)<<endl;

    return 0;
}
