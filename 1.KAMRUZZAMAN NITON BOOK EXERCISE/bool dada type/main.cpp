#include <iostream>

using namespace std;

int main()
{
    bool getresult;
    int x,y,z;
    x=5,y=10,z=15;
    getresult=x>y;
    cout<< "result of getresult: x>y:"<<getresult<<endl;
    getresult=y<z;
    cout<< "result of getresult:y<z:"<<getresult<<endl;
    getresult=x+y-z;
    cout<< "result of getresult: x+y-z:"<<getresult<<endl;
    getresult=x+z-y;
    cout<< "result of getresult:x+z-y:"<<getresult<<endl;
    getresult=true;
    cout<< "result of true :"<<getresult<<endl;
    getresult=false;
    cout<< "result of false is:"<<getresult<<endl;

    return 0;
}
