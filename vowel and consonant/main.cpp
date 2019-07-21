#include <iostream>

using namespace std;

int main()
{
    char name;
    cout << " enter any letter:";
    cin>> name;
    name=tolower(name);
    if(name=='a'||name=='e'||name=='i'||name=='o'||name=='u')
    {
        cout << "the letter is vowel"<<endl;
    }
    else
    {
        cout << "the letter is consonant"<<endl;
    }

    return 0;
}
