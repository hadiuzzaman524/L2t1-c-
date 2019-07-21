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
  vector<int> appleposition(m);
  for(int i=0; i<appleposition.size(); i++)
  {
      appleposition[i]=a+apple[i];
      if(appleposition[i]>=s&&appleposition[i]<=t)
      {
          applesum++;
      }
  }
  vector<int> orrangeposition(n);
  for(int i=0; i<orrangeposition.size(); i++)
  {
      orrangeposition[i]=b+orrange[i];
      if(orrangeposition[i]>=s&&orrangeposition[i]<=t)
      {
          orrangesum++;
      }
  }
  cout<< applesum<<endl;
  cout<< orrangesum<<endl;

}
