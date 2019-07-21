#include <iostream>
#include <string.h>
using namespace std;
class listelement
{
private:
    int i;
public:
    void setvalue(int x)
    {
        i=x;
    }
    int getvalue()
    {
        return i;
    }
    listelement *nextelement;
};
class list
{
private:
    listelement *headelement;
    listelement *tailelement;
    listelement *newelement;
public:
    list()
    {
        headelement=tailelement=newelement=NULL;
    }
    void addelement(int item)
    {
        newelement=new listelement;
        newelement->setvalue(item);
        newelement->nextelement=NULL;
        if(headelement !=NULL)
            tailelement->nextelement=newelement;
        else
            headelement=newelement;
        tailelement=newelement;
    }
    void displayelement()
    {
        listelement *currentelement;
        currentelement=headelement;
        cout<< "HEAD->";
        while(currentelement !=NULL)
        {
            cout<< "currentelement->getvalue()"<< "->";
            currentelement=currentelement->nextelement;
        }
        cout<< "NULL"<<endl<<endl;
    }
    int findelement(int value)
    {
        listelement *currentelement;
        bool found;
        found=false;
        currentelement=headelement;
        while(currentelement !=NULL)
        {
            if(currentelement->getvalue()==value)
            {
                found=true;
                break;
            }
            currentelement=currentelement->nextelement;
        }
        return found;
    }
    void addordered(int item)
    {
        listelement *current,*oldcurrent,*previous,*next;
        newelement=new listelement;
        newelement->setvalue(item);
        newelement->nextelement=NULL;
        if(headelement==NULL)
        {
            headelement=newelement;
        }
        else
        {
            current=headelement;
            while(current !=NULL)
            {
                if(item<=current->getvalue())
                {
                    previous=current;
                    next=current->nextelement;
                    break;
                }
                else
                {
                    previous=current;
                    next=current->nextelement;
                }
                oldcurrent=current;
                current=current->nextelement;
            }
            if(previous==headelement)
            {
                newelement->nextelement=headelement;
                headelement=newelement;
            }
            else
            {
                if(current==NULL)
                {
                    previous->nextelement=newelement;
                    newelement->nextelement=next;

                }
                else
                {
                    newelement->nextelement=previous;
                    oldcurrent->nextelement=newelement;
                }
            }
        }
        current=headelement;
        while(current !=NULL)
        {
            tailelement=current;
            current=current->nextelement;
        }
    }
    void deleteelement(int item)
    {
        listelement *current,*foundat,*oldcurrent;
        bool found;
        found=false;
        current=headelement;
        while(current !=NULL)
        {
            if(current->getvalue()==item)
            {
                found=true;
                foundat=current;
                break;
            }
            oldcurrent=current;
            current=current->nextelement;
        }
        if(found)
        {
            if(headelement==foundat)
            {
                headelement=foundat->nextelement;
                foundat->nextelement=NULL;
            }
            else
                if(foundat->nextelement==NULL)
                oldcurrent->nextelement=NULL;
            else
            {
                oldcurrent->nextelement=foundat->nextelement;
                foundat->nextelement=NULL;
            }
        }
        current=headelement;
        while(current !=NULL)
        {
            tailelement=current;
            current=current->nextelement;
        }
    }
    ~list()
    {
        delete newelement;
    }
};
int main()
{
    list le;
    le.addordered(425);
    le.addordered(225);
    le.addordered(325);
    le.addordered(125);
    cout<< "after adding 4 element: "<<endl;
    cout<< endl;
    le.displayelement();
    cout<< "after deleting 325.."<<endl;
    le.deleteelement(325);
    le.displayelement();
    cout<< "after deleting 125.."<<endl;
    le.deleteelement(125);
    le.displayelement();
    cout<< "after deleting 425.."<<endl;
    le.deleteelement(425);
    le.displayelement();
    cout<< "after deleting 225.."<<endl;
    le.deleteelement(225);
    le.displayelement();
}
