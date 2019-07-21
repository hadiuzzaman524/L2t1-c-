#include <iostream>
#include <string.h>
using namespace std;
 struct student
   {
       char name[25];
       char id[20];
       char dept[20];
       float cgpa;
       int x;
   } ;
int main()
{

   struct student *ptr;
   ptr=new student;
   strcpy(ptr->name,"md hadiuzzaman");
   strcpy(ptr->id,"1234556");
   strcpy(ptr->dept,"cse");
   ptr->cgpa=float(1.44);
   cout<< "Name: "<< ptr->name<<endl;
   cout<< "Id: "<<ptr->id<<endl;
   cout<< "Dept: "<<ptr->dept<<endl;
   cout<< "Cgpa: "<<ptr->cgpa<<endl;
   cout<< "size: "<<sizeof(student)<<endl;
}
