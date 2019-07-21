#include <iostream>

#include <stdlib.h>
using namespace std;
void memerror(void)
{
    cout<< "error memory allocation"<<endl;
    exit(2);

}
int main()
{
    set_new_handler(memerror);
   int *ptr;
   ptr=new int[5000000000];
   *ptr=50;
   cout<< "first element: "<< *ptr<<endl;

   //set_new_handler(0);

}
