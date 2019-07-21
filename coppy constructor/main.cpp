#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class cd
{
private:
    string interpret,title;
    long seconds;
public:
    cd(const string& i="",const string& t="",long s=0L)
    {
        interpret=i;
        title=t;
        seconds=s;

    }
    const string& getinterpret()const
{
    return interpret;
}
const string& gettitle() const
{
    return title;
}
long getseconds() const
{
    return seconds;
}
};

void printline(cd ob);
int main()
{   cd ob1("mister x","lets dance",30*60+41),
ob2("new guitars","flamenco collection",2772),ob3=ob1,ob4;
ob4=ob2;
string line(70,'-');
line +='\n';
cout<< line<<left<<setw(20)<< "interpreter"<<setw(30)
<< "title"<< "length (min:sec)\n"<<line<<endl;
printline(ob3);
printline(ob4);

    return 0;
}
void printline(cd ob)
{
    cout<< left<< setw(20)<<ob.getinterpret()
    <<setw(30)<<ob.gettitle()<<right<<setw(5)<<ob.getseconds()/60
    << ':'<<setw(2)<<ob.getseconds()%60<<endl;
}
