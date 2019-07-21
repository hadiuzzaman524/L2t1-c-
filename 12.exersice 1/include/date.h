#ifndef DATE_H
#define DATE_H


class date
{
    public:
    void init(void);
    void init(int month,int day,int year);
  void print(void);

    private:
        short month,day,year;
};

#endif // DATE_H
