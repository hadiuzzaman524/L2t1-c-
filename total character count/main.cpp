#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   char mya[15];
   gets(mya);
     int co=0;
    for(int i=0; i<=15; i++)
    {
        if(myword[i]=='l')
            co++;
    }
    cout<< co;

    return 0;
}
