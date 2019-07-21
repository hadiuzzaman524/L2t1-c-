#include <iostream>
using namespace std;

int arr[4]={0,10,20,30};

int main()
{
    cout<< "\nAddress and values of array elements:\n"<<endl;
    for(int i=0; i<4; i++)
        cout<< "Address of :"<<(void*)(arr+i)<< "values:"<< *(arr+i)<<endl;

    return 0;
}
