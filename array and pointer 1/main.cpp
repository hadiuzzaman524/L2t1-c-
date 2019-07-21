#include <iostream>

using namespace std;

int main()
{
    cout<< "demonstrating arrays of char and pointers to char\n"<<endl;
    char text[]= "good morning or!";
    char name[]= "jaman ";
    char *ptr="hello ";
    cout<< ptr<<name<<text<<endl;
    cout<< "the text: "<<text<< "starts at address:"<< (void*)text<<endl;
    cout<< text+6<<endl;
    ptr=name;
    cout<< "this is the "<<*ptr<< "of"<<ptr<<endl;
    *ptr= 'k';
    cout<< "jaman can not "<< ptr<< "!\n"<<endl;
    return 0;
}
