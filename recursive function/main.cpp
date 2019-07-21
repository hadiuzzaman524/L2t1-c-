#include <iostream>
using namespace std;
void getput(void);
int main()
{
    cout<<"please enter a line of text:\n";
    getput();
    cout<<"\nbye bye!"<<endl;

    return 0;
}
void getput()
{
    char c;
    if(cin.get(c)&&c!='\n')
        getput();
    cout.put(c);
}
