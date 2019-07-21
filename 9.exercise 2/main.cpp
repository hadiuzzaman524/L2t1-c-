#include <iostream>
#include <string>
using namespace std;

string header="*** testing palindromes ***",jaman="enter a word:",line(50,'-');

int main()
{
    string word;
    char key='y';
    cout<< "\n\t "<<header<<endl;
    while(key=='y'||key=='Y')
    {
        cout<< '\n'<<line<<'\n'<<jaman;
        cin>>word;

         int i=0,j=word.length()-1;
         for(; i<=j; ++i,--j)
            if(word[i] !=word[j])
            break;
         if(i>j)
            cout<< "\n the word:"<<word<< " is a palindrome!"<<endl;
         else
            cout << "\n the word:"<<word<< "is not palindrome!"<<endl;

         cout<< "\n repeat? (y/n)";
         do
            cin.get(key);
         while( key !='y'&& key !='Y'&& key !='n'&& key !='N');
         cin.sync();
    }

    return 0;
}
