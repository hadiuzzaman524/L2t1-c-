#include <iostream>

using namespace std;

int main()
{
    int x,count =0;
    float sum=0.0;
    cout<< "please enter some integers:\nbreak with any letter"<<endl;
    while(cin>>x)
    {
        sum+=x;
        ++count;
    }
    cout << "the average of the number:"<<sum/count<<endl;

    return 0;
}
