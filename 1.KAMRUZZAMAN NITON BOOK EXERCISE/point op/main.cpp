#include <iostream>

using namespace std;
void changevalue(int *a)
{
    *a=15;
}

int main()
{
   int i=10;
   cout<< "before calling changevalue():"<< i<<endl;
   changevalue(&i);

       cout<< "after calling changevalue():"<< i<<endl;

    return 0;
}
