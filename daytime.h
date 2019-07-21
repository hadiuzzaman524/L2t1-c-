#ifndef DAYTIME_H
#define DAYTIME_H
#include "result.h"

class daytime
{
    public:
        daytime(int h=0,int m=0,int s=0)
        {
            overflow=false;
            if(!settime(h,m,s))
                hour=minute=second=0;
        }
      bool settime(int hour,int minute,int second=0)
      {
          if(hour>=0&&hour<24&&minute>=0&&minute<60&&second>=0&&second<60)
          {
              this ->hour=(short)hour;
          this ->minute=(short)minute;
          this ->second=(short)second;
          return true;
          }
          else
            return false;

      }
      int gethour() const
      {
          return hour;
      }
      int getminute() const
      {
          return minute;
      }
      int getsecond() const
      {
          return second;
      }
    int asseconds() const
    {
        return (60*60*hour+60*minute+second);
    }
    bool isless(daytime t) const
    {
        return asseconds() <t.asseconds();
    }
    private:
        short hour,minute,second;
        bool overflow;

};

#endif // DAYTIME_H
