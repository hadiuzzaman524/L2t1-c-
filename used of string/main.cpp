#include <iostream>
#include <string>
using namespace std;

string jaman("enter a line of text:"),line(50,'*');
int main()
{
    string text;
    cout<< line<<endl<<jaman<<endl;
    getline(cin,text);
    cout<< line<<endl<<"your text is "<<text.size()<< "character long."<<endl;
    string copy(text),start(text,0,10);

    cout<< "your text:\n"<<copy<<endl;
    text="01785304677";
    cout<< line<<endl;
    cout<< "the first ten character :\n"<<start<<endl<<text<<endl;
    return 0;
}
