#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int p,q;
    p=5;
    q=7;
    swap(&p,&q);
    printf("p=%d, q=%d",p,q);

    return 0;
}
