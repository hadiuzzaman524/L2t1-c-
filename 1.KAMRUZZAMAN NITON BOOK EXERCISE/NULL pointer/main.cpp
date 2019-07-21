#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    ptr=new int[500000000000000];
    if(ptr==NULL)
    {
        cout<< "memory doesnot allocate!"<<endl;
    }
    else
        *ptr=50;
    cout<< "the first element is: "<< *ptr<<endl;

}
