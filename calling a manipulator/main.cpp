#include <iostream>

using namespace std;

int main()
{
   cout << showpos<<123;
   cout.setf(ios::showpos);
   cout <<123;
   cout <<22;
   cout << noshowpos<<123;
   cout.unsetf(ios::showpos);
   cout<<123;
    return 0;
}
