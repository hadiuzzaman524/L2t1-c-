#include <iostream>
#include <string>
using namespace std;

inline double max(double x,double y)
{
    return (x<y?y:x);
}
inline char max(char x,char y)
{
    return(x<y?y:x);
}
string header("to use the overloaded function max().\n"),line(50,'*');

int main()
{
    double x1=0.0,x2=0.0;
    line+='\n';
    cout<< line<<header<<line<<endl;
    cout<< "enter two floating point numbers:"<<endl;
    if(cin>>x1&&cin>>x2)
    {
        cout<< "the greater number is:"<<max(x1,x2)<<endl;
    }
    else
    {
        cout<< "invalid input!"<<endl;
    }
    cin.sync();
    cin.clear();

    cout<< line<<"and once more with character!"<<endl;
    cout<< "enter two character:"<<endl;
    char c1,c2;
    if(cin>>c1&&cin>>c2)
    {
        cout<< "the greater character is : "<<max(c1,c2)<<endl;

    }
    else

        cout<< "invalid input!"<<endl;

    cout<< "testing with arguments:"<<endl;
    int a=30,b=50;
    cout<< max(a,b)<<endl;
    return 0;
}
