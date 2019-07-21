#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
  int s,t;
  int a,b;
  int m,n;
  cin>>s>>t>>a>>b>>m>>n;
  int applesum=0;
  int  orrangesum=0;
  vector<int> apple(m);
  vector<int>::iterator it;
  for(it=apple.begin(); it !=apple.end(); it++)
  {
      cin>>*it;
  }
  vector<int> orrange(n);
  vector<int>::iterator it1;
  for(it1=orrange.begin(); it !=orrange.end(); it++)
  {
      cin>>*it1;
  }
}
