#include "Article.h"
#include <iostream>
#include <iomanip>
using namespace std;
int count=0;
Article::Article(long nr,const string& name,double sp)
{
   setnr(nr);
   setname(name);
   setsp(sp);
   ++count;
   cout<< "create object for the article "<<name<< ".\n this is the "<<count<< ".article\n";
}

Article::~Article()
{
    cout<< "cleaned up object for the article" <<name<< ".\n there are still"<<--count<< ".article\n"<<endl;
}
void Article::print()
{
   // long savedflags=cout.flags();
    cout<< fixed<<setprecision(2)<<".........................................\n"
    << "article data:\nnumber .....:"<<nr<< "\n"<< "name......:"<<name<< "\n"
    << "sales price:"<<sp<< "\n" <<"..........................................\n"<<endl;
   // cout.flags(savedflags);
   // cout<< "........... go on with return............";
   // cin.get();


}
