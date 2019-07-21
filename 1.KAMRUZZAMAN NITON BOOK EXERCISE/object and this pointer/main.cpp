#include <iostream>
#include <string.h>
using namespace std;
class Monitor
{
private:
    int inch;
    char company[10];
    char model[25];
public:
    Monitor(int i,char *c,char *m);
    void showinfo();
};
Monitor::Monitor(int i,char *c,char *m)
{
    inch=i;
    strcpy(company,c);
    strcpy(model,m);

}
void Monitor:: showinfo()
{
    cout<< "Monitor size: "<< inch<< endl;
    cout<< "manufacture: "<<company<<endl;
    cout<< "model : "<<model<<endl;
}
int main()
{
   Monitor my(17,"LG","fastorn 34" );
   Monitor his(15,"samsung", "j5 jdk");
   cout<< "my monitor is : "<<endl;
   my.showinfo();
   cout<< "his monitor is:"<<endl;
   his.showinfo();
}
