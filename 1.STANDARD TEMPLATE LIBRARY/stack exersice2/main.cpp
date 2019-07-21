#include <iostream>
#include <stack>
using namespace std;

int main()
{
   stack <string> st;
   st.push("jaman");
   st.push("habib");
   st.push("rakib");
   st.push("ashrafi");
   while(!st.empty())
   {
       string x;
       x=st.top();
       cout<< x<<endl;
       st.pop();
   }
    return 0;
}
