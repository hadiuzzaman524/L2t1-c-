#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int x1,v1,x2,v2;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    if(v1>v2)
    {
        if((x2-x1)%(v2-v1)==0)
        {
            printf("YEs");
        }
        else
        printf("NO");
    }
     printf("NO");

}




