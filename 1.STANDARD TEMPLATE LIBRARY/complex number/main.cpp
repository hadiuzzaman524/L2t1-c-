#include <iostream>
#include <queue>
#include <complex>
using namespace std;
//using complex=complex<double>
complex<double>cm;
struct complexcompare
{
    bool operator()(complex c1,complex c2)
    {
        double a=c1.real(),b=c1.imag(),c=c2.real(),d=c2.imag();
        return sqrt((a*a+b*b)<(c*c+d*d));
    }
};

int main()
{
    priority_queue<complex,vector<complex>,complexpare> q;
    q.push({3,4});
    q.push({12,3});
    q.push({5,45});
    q.push({11,5});
    while(!q.empty())
    {
        cout<< q.top()<<endl;
        q.pop();
    }
    cout<<endl;
    return 0;
}
