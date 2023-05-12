#include "zd3.h"
#include <iostream>

void oruzje::reload()
{
    this->trenutni_br_metaka=this->br_metaka;
    std::cout<<"RELOAD"<<std::endl;
}

void oruzje::shoot()
{
    if (this->trenutni_br_metaka==0) 
    {
        std::cout<<"nema metaka - treba reload"<<std::endl;
        this->reload();
    }
    else
    {
        this->trenutni_br_metaka--;
        //std::cout<<"puca, -1 metak"<<std::endl;
    }
}

void oruzje::polozaj(int x, int y, int z)
{
    this->x=x;
    this->y=y;
    this->z=z;
}

void oruzje::ispis() const
{
    std::cout<<"koord oruzja su: ("<<this->x<<","<<this->y<<","<<this->z<<")"<<std::endl;
    std::cout<<"trenutni br metaka u oruzju: "<<this->trenutni_br_metaka<<std::endl;
}
