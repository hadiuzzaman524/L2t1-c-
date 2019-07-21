#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << " enter a character: ";
    cin>> ch;
    ch=tolower(ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "vowel"<<endl;
        break;
    default:
        cout << "consonant"<<endl;
    }
    return 0;
}
