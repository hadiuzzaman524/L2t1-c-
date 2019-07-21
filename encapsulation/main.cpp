#include <iostream>
#include <string>
using namespace std;
class student
{
    private:
        string name;
    public:
        void setname(string x)
        {
            name=x;
        }
        string getname()
        {
            return name;
        }
};

int main()
{
   student oshin;
   oshin.setname("orpi");
   cout<< oshin.getname();
    return 0;
}
