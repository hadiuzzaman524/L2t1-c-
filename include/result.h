#ifndef RESULT_H
#define RESULT_H
#include "daytime.h"
#include "result.h"
class result
{
    public:
        result();
        result(double w,const daytime& z=currenttime());
        result(double w,int hr,int min,int sec);
        double getval() const
        {
            return val;

        }
        void setval(double w)
        {
            val=w;
        }
        const daytime& gettime() const
        {
            return time;
        }
        void settime(const daytime& z)
        {
            time=z;
        }
        bool settime(int hr,int min,int sec)
        {
            return time.settime(hr,min,sec);
        }
        void print() const;

    private:
        double var1;
        daytime time;

};

#endif // RESULT_H
