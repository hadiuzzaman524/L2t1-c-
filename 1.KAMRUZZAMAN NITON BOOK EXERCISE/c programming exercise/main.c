#include <stdio.h>
#include <stdlib.h>
void getstoredarray(int a[])
{
   int i,j,temp;
   for(i=0; i<5-1; i++)
   {
       for(j=0; j<5-1-i; j++)
       {
           if(a[j]<a[j+1])
           {
               temp=a[j+1];
               a[j+1]=a[j];
               a[j]=temp;

           }
       }
       for(i=0; i<5; i++)
        printf("%d ",a[i]);
   }



}
int getlargevalue(int a[])
{
    int i,getlarge;
    getlarge=a[0];
    for(i=0; i<5; i++)
    {
        if(a[i]>getlarge)
        {
            getlarge=a[i];

        }
        return (getlarge);
    }
}

int main()
{
  int i,a[5];
  printf("enter five integer :");
  for(int i=0; i<5; i++)
  {
      scanf("%d",&a[i]);

  }
  printf("\n\nyou are entered integer are:\n");
  for(i=0; i<5; i++)
    printf("%d",a[i]);
  printf("\n\nafter sorting:\n");
  getstoredarray(a);
  printf("\n\nthe largest value is :%d\n",getlargevalue(a));
    return 0;
}
