#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    while(1)
    {
        int gess_n,random_n;
        cout << "enter your gess number between 1-5: ";
        cin>>gess_n;
        random_n=rand()%5+1;
        if(random_n==gess_n)
        {
            cout << "you have won the game!"<<endl;
        }
        else
        {
            cout << "you have lost. please try again."<<endl;
        }

    }system("CLS");


    return 0;
}
