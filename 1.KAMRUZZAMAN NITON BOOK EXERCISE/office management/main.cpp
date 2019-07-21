#include <iostream>
using namespace std;
class employee
{
private:
    char *empname;
    int empyear;
    float empsalary;
public:
    employee(char *name,int year,float salary);
private:
    int workedyear(void);
    void printinfo(void);

};
employee::employee(char *name,int year,float salary)
{
    empname=name;
    empyear=year;
    empsalary=salary;
    printinfo();

}
int employee::workedyear(void)
{
    int y,yeardifference;
    cout<< "enter current year:";
    cin>> y;
    yeardifference=(empyear-y);

    return(yeardifference);
}
void employee::printinfo(void)
{
    cout<< "name:"<<empname<<endl;
    cout<< "join date:"<< empyear<<endl;
    cout<< "salary: "<< empsalary<<endl;
    cout<< "worked: "<< workedyear()<< "years\n"<<endl;
}
int main()
{
    employee RAM("ram",1997,12455);
    return 0;
}
