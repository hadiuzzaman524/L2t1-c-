#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct cmp
{
    bool operator() (int a,int b)
    {
        return b<a;
    }
};

int main()
{
  priority_queue <int,vector<int>,cmp>q;
  q.push(3);
  q.push(12);
  q.push(55);
  q.push(11);
  q.push(2);
  q.push(4);
  while(!q.empty())
  {
      cout<< q.top()<<endl;
      q.pop();
  }

    return 0;
}
