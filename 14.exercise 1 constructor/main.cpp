#include <iostream>
#include "Article.h"
#include <string>
using namespace std;

void test();
Article Article1(1111,"hadiuzzaman",59.9);


int main()
{
    cout<< "\nthe first statement in main().\n"<<endl;
    Article Article2(2222,"ashrafi akter",59.9);
    Article1.print();
    Article2.print();

    Article& shoes=Article2;
    shoes.setnr(2233);
    shoes.setname( "fariha shoes");
    shoes.setsp(shoes.getsp() -50.5);
    cout<< "\nthe new values of the shoes object:\n";
    shoes.print();
    cout<< "\nthe first call to test()."<<endl;
    test();
    cout<< "\nthe second call to test()."<<endl;
    test();
    cout<< "\nthe last statement in main().\n"<<endl;

    return 0;
}
void test()
{
    Article shirt(3333, "T-shart",29.36);
    shirt.print();
    static Article net( 4444, "volley ball net",99.0);
    net.print();
    cout<< "\nlast statement of the functionn test()"<<endl;
}
