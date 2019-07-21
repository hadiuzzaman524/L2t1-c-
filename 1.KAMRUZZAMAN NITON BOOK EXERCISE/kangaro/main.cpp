#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
   int x1,v1,x2,v2;
   cin>>x1>>v1>>x2>>v2;
   if ((v1 == v2) && !(x1 != x2))
	printf("NO");
if(v1 > v2 && !((x2-x1)%(v1-v2)))
    printf("YES");
else if(v2 > v1 && !((x1-x2)%(v2-v1)))
    printf("YES");
else
    printf("NO");
}
