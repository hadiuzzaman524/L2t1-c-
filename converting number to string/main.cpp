#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
   double x=12.3;
   string str;
   stringstream iostream;
   iostream<<setw(10)<<x;
   iostream>>str;
    cout<< str;
    return 0;
}
