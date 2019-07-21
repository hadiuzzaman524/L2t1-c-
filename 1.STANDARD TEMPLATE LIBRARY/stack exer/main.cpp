#include <iostream>
#include <stack>
using namespace std;

int main()
{
   stack<string> st;
   st.push("jaman");
   st.push("habib");
   st.push("rakib");
   st.push("ashrafi");
   st.push("oshin");
   st.pop();
   cout<< st.top()<<endl;
    return 0;
}
