#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the number of subject: ";
    cin>>n;
    int student[n],sum=0;
    for(int i=0; i<n; i++)
    {      cin>> student[i];
        sum=sum+student[i];
    }
    cout<< "total marks: "<<sum<<endl;
    float avg=(float)sum/n;
    cout << "average number is : "<<avg<<endl;

    int mx=student[0];
    for(int i=0; i<n; i++)
    {
        if(mx<student[i])
        {
            mx=student[i];
        }
    }
    cout << "the maximum number is: "<<mx<<endl;

    return 0;
}
