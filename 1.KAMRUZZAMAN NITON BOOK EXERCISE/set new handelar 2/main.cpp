#include <iostream>
#include <stdlib.h>
using namespace std;
void jaman(void)
{
    cout<< "the memory does not allocated."<<endl<<endl;
    exit(1);
}
int main()
{
    set_new_handler(jaman);
    int *ptr;
    ptr=new int[50000000000000000000];
    *ptr=40;
    cout<< "the first element of the array is:"<< *ptr<<endl;

}
