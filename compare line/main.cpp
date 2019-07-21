#include <iostream>
#include <string>
using namespace std;

string jaman("please enter two lines of text..\n"),line(30,'-');

int main()
{
    string line1,line2,key= "y";
    while(key== "y"|| key=="Y")
    {
        cout<<line<< '\n'<<jaman<<line<<endl;
        getline(cin,line1);
        getline(cin,line2);

        if(line1==line2)
            cout<< "both lines are the same."<<endl;
        else
        {
            cout<< "the smaller lines is :\n\t";
            cout<< (line1>line2?line2:line1)<<endl;
            int len1=line1.length();
            int len2=line2.length();
            if(len1==len2)
                cout<< "both lines have the same length.\n";
            else
            {
                cout<< "the shorter line is:\n\t";
                cout<< (len1<len2?len1:len2)<<endl;
            }

        }
           cout<< "\n repeat? (y/n)";
    do
        getline(cin,key);
    while(key != "y"&&key != "Y"&&key != "n"&& key != "N");
    }


    return 0;
}
