#include "zd1.h"
#include <iostream>

money::money(int kn, int lp)
{
    this->kn=kn;
    this->lp=lp;
}

money money::operator+(money &racun) 
{
    money racun2(this->kn+racun.kn, this->lp+racun.lp);

    if (racun2.lp>=100) //100lp=1kn
    {
        racun2.kn+=1;
        racun2.lp-=100;
    }

    return racun2;
}

money money::operator-=(money &racun)
{
    this->kn-=racun.kn;
    this->lp-=racun.lp;

    if (this->lp<0)
    {
        this->kn-=1;
        this->lp+=100;
    }

    return *this;
}

money money::operator+=(money &racun)
{
    this->kn+=racun.kn;
    this->lp+=racun.lp;

    if (this->lp>=100) //100lp=1kn
    {
        this->kn+=1;
        this->lp-=100;
    }

    return *this;
}

std::ostream& operator<<(std::ostream &os, const money &racun)
{
    os <<racun.kn<<" kuna, "<<racun.lp<<" lipa";
    return os;
}

money::operator double() 
{
    double kn=this->kn;
    double lp=this->lp;
    return kn+(lp/100);
}