#include <iostream>
#include "zd4.h"

void tocka::generiraj_dl()
{
    this->x=rand()%8;
    this->y=rand()%8;
    this->z=rand()%8;
}

void tocka::generiraj_gd(tocka &t)
{
    this->x=rand()%10+t.x;
    this->y=rand()%10+t.y;
    this->z=t.z;
}

void meta::generiraj()
{
    this->donja_lijeva.generiraj_dl();
    this->gornja_desna.generiraj_gd(this->donja_lijeva);
    this->pogodena=false;
}

void tocka::ispis(){std::cout<<"("<<this->x<<","<<this->y<<","<<this->z<<")"<<std::endl;}
void meta::ispis()
{
    std::cout<<"koord donje lijeve tocke su: ";
    this->donja_lijeva.ispis();
    std::cout<<"koord gornje desne tocke su: ";
    this->gornja_desna.ispis();
}

void tocka::get(int *x, int *y, int *z)
{
    *x=this->x;
    *y=this->y;
    *z=this->z;
}

void tocka::set(int x, int y, int z)
{
    this->x=x;
    this->y=y;
    this->z=z;
}

bool meta::pogodak(tocka &t)
{
    this->pogodena=false;

    int x1,y1,z1; //koord oruzja
    int x2,y2,z2; //koord donje lijeve tocke
    int x3,y3,z3; //koord gornje desne tocke
    t.get(&x1,&y1,&z1);
    this->donja_lijeva.get(&x2,&y2,&z2);
    this->gornja_desna.get(&x3,&y3,&z3);

    if ((y2<=y1) && (y3>=y2))
    {
        this->pogodena=true;
        return this->pogodena;
    }
    
    return this->pogodena;
}