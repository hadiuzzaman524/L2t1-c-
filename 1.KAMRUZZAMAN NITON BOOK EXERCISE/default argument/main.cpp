#include <iostream>

using namespace std;
void func(int x,float y=3.1416)
{
    cout<< "value of x and y are: "<< x << " "<<y<<endl;

}

int main()
{
   func(10);
   func(10,7.987);


    return 0;
}
