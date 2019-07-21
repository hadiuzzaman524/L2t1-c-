#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{int number,attempt;
    char wb='r';
    long sec;
    time(&sec);
    srand((unsigned)sec);
    cout<< "\n\n ******** a neumerical game  **************"<<endl;
    cout<< "\n\n rules of game:"<<endl;
    while(wb=='r')
    {cout<< "i have a number between 1 and 15 in mind\n you have three chances to guess correctly!\n"<<endl;
        number=(rand()%15)+1;
        bool found=false;
        int count=0;
        while( !found &&count <3)
        {
            cin.sync();
            cin.clear();
            cout<< ++count<< ".attempt:";
            cin>>attempt;
            if(attempt<number)
                cout<< "too small!"<<endl;
            else if(attempt>number)
                cout<< "too big!"<<endl;
            found=true;
        }
        if(!found)
            cout<< "\n i won! the number in question was:"<<number<<endl;
        else
            cout << "congratulations! you won!"<<endl;
        cout << "repeat -> <r> finish -> <f>\n";
        do
            cin.get(wb);
        while(wb !='r'&&wb !='f');
    }
    return 0;
}
