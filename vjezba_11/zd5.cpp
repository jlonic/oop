#include <iostream>
#include "zd5.h"

int Trokut::getA()
{
    return this->a;
}

int Trokut::getB()
{
    return this->b;
}

int Trokut::getC()
{
    return this->c;
}

int vekt::najveci_opseg()
{
    int opseg=0;
    int najveci_opseg=0;
    int a,b,c;
    int ind;
    for(int i=0;i<v.size();i++)
    {
        a=v.at(i).getA();
        b=v.at(i).getB();
        c=v.at(i).getC();
        opseg=a+b+c;
        if (najveci_opseg<opseg)
        {
            ind=i;
            najveci_opseg=opseg;
        }

    }
    std::cout<<"najveci opseg je "<<najveci_opseg<<std::endl;
    return ind;
}
Trokut::Trokut(int a, int b, int c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}

void vekt::unos(Trokut &t)
{
    this->v.push_back(t);    
}

Trokut vekt::getTrokut(int a)
{
    return v.at(a);
}

void Trokut::print()
{
    std::cout<<this->a<<", "<<this->b<<", "<<this->c<<std::endl;
}