#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue <int> q;
    q.push(400);
    q.push(600);
    q.push(66);
    q.push(67);
    while(!q.empty())
    {
        int x;
        x=q.top();
        cout<< x<<endl;
        q.pop();
    }
    return 0;
}
