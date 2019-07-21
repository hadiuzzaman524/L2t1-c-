#ifndef ARTICLE_H
#define ARTICLE_H
#include "Article.h"
#include <string>
using namespace std;
class Article
{
      private:
        long nr;
    string name;
        double sp;
    public:
        Article(long nr=0,const string& name="noname",double sp=0);
        ~Article();
        void print();
        const string& getname() const
        {
            return name;
        }
        long getnr() const
        {
            return nr;
        }
        double getsp() const
        {
            return sp;
        }
        bool setname(const string& s)
        {
            if(s.size()<1)
                return false;
            else
                name=s;
            return true;
        }
        void setnr(long n)
        {
            nr=n;
        }
        void setsp(double v)
        {
            sp=v>0.0?v:0.0;
        }





};

#endif // ARTICLE_H
