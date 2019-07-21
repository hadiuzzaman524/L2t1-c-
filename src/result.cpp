#include "result.h"
#include "daytime.h"
result::result()
{
    val=0.0;
}
result::result(double w,const daytime& z)
{
   val=w;
   time=z;
}
result::result(double w,int hr,int min,int sec)
{
    val=w;
    time=daytime(hr,min,sec);
}
