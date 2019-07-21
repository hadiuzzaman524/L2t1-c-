#include <iostream>
using namespace std;
class classA
{
    int a,b;
public:
    classA(int x,int y)
    {
        a=x;
        b=y;
    }
    void add_AB(int p,int q)
    {
        cout<< "\nobj["<<p<< "]["<<q<<"]:a+b="<< a+b<<endl;
    }
};

int main()
{
    classA obj[2][3]={classA(3,3),classA(9,4),classA(2,5),
                        classA(5,3),classA(6,4),classA(1,5)};
                        for(int i=0; i<2; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                obj[i][j].add_AB(i,j);
                            }
                        }
    return 0;
}
