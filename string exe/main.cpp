#include <iostream>
#include <string>
#include<cctype>        //used for isspace()
using namespace std;

int main()
{
    string header( "****counts words ****\n"),jaman("enter a text and terminate with a period and return:");
    string line(60,'-'),text;
    cout<< header<<endl<<jaman<<endl<<line<<endl;
    getline(cin,text,'.');
    int i,nspace=0,nword=0;
    bool fspace=true;
    for(i=0; i<text.length();++i)
    {
        if(isspace(text[i]))
        {
            ++nspace;
            fspace=true;
        }
        else if(fspace)
        {
            ++nword;
            fspace=false;
        }
    }
    cout <<line<< "\n your text contains (without periods)\n    characters:"<<text.length();
    cout<< "\n  words:"<<nword;
    cout<< "\n  white space:"<<nspace<<endl;

    return 0;
}
