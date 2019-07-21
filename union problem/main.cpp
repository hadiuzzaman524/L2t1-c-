#include <iostream>
using namespace std;
union wordbyte
{
    private:
        unsigned short w;
        unsigned char b[2];
    public:
        unsigned short &word()
        {
            return w;
        }
        unsigned char &lowbyte()
        {
            return b[0];

        }
        unsigned char &highbyte()
        {
            return b[1];
        }
};

int main()
{
    wordbyte wb;
    wb.word()=256;
    cout<< "\n word:"<<(int)wb.word();
    cout<< "\n low byte:"<<(int)wb.lowbyte();
    cout<< "\nhigh byte:"<< (int)wb.highbyte()<<endl;
    return 0;
}
