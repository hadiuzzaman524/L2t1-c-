#include <iostream>

using namespace std;

int main()
{
    float bangla,english,math,chemistry;
    cout << " enter bangla marks:";
    cin>> bangla;
    cout << " enter english marks:";
    cin>> english;
    cout << " enter math marks:";
    cin>> math;
    cout<< " enter chemistry marks:";
    cin>> chemistry;
    if(bangla&&english&&math&&chemistry>=80)
    {
        cout << "you are got A+" <<endl;
    }
               else if(bangla&&english&&math&&chemistry>=70&&bangla&&english&&math&&chemistry<80)
               {
                   cout << "you are got A"<<endl;
               }
               else if(bangla&&english&&math&&chemistry>=60&&bangla&&english&&math&&chemistry<=70)
               {
                   cout << " you are got A-"<<endl;
               }
               else if(bangla&&english&&math&&chemistry>=50&&bangla&&english&&math&&chemistry<60)
               {
                   cout << "you are got B"<<endl;
               }
               else if(bangla&&english&&math&&chemistry>=33&&bangla&&english&&math&&chemistry<50)
               {
                   cout << " you are got C"<<endl;
               }
               else
               {
                   cout << "you are fail"<<endl;
               }


    return 0;
}
