#include <iostream>
#include <string>
using namespace std;

string jaman("please enter some text:\n"),line(50,'-');

int main()
{
    jaman+= "terminate the input with an empty line.\n";
    cout<< line << '\n'<<jaman<<line<<endl;
    string text,line;

    while(true)
    {
        getline(cin,line);
        if(line.length()==0)
            break;
        text=line+'\n'+text;

    }
    cout<< line<< '\n'<< "your lines of text in reverse order:"<< '\n'<<line<<endl;
    cout<< text<<endl;
    return 0;
}
