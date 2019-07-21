#include <iostream>
using namespace std;
class sample
{
    int i;
public:
    sample()
    {
        cout<< "constructing............."<<endl;
    }
    void seti(int x)
    {
        i=x;
    }
    int geti()
    {
        return i;
    }
    ~sample()
    {
        cout<< "destructing................"<<endl;
    }
};
int main()
{
   sample *ptr;
   ptr=new sample[5];
   for(int i=0; i<5; i++)
   {
       ptr->seti(50+i);
   }
  for(int i=0; i<5; i++)
  {
    cout<< "value of i: "<< ptr->geti()<<endl;
  }

   delete []ptr;
}
