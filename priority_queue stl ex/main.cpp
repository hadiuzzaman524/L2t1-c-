#include <iostream>
#include <queue>
using namespace std;

int main()
{
   priority_queue <int> q;
   q.push(12);
   q.push(34);
   q.push(37);
   q.push(89);
   q.push(98);
   while(!q.empty())
   {
       cout<< q.top()<<endl;
       q.pop();
   }

    return 0;
}
