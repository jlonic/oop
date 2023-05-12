#include "zd1.h"
#include <iostream>

watercraft::watercraft()
{
    this->tip_vozila="water";
}

std::string watercraft::type()
{
    return this->tip_vozila;
}

aircraft::aircraft()
{
    this->tip_vozila="air";
}

std::string aircraft::type()
{
    return this->tip_vozila;
}

ferry::ferry(unsigned broj_putnika, unsigned broj_bicikli, unsigned broj_automobila)
{
    this->broj_putnika=broj_putnika+broj_bicikli+broj_automobila*5; //bicikl ima jednog putnika, auto ima 5
}

unsigned ferry::passengers()
{
    return this->broj_putnika;
}

catamaran::catamaran(unsigned broj_putnika)
{
    this->broj_putnika=broj_putnika;
}

unsigned catamaran::passengers()
{ 
    return this->broj_putnika;
}

seaplane::seaplane(unsigned broj_putnika)
{
    this->tip_vozila="air-water";
    this->broj_putnika=broj_putnika;
}

unsigned seaplane::passengers()
{
    return this->broj_putnika;
}

std::string seaplane::type() 
{
    return this->tip_vozila="air-water";
}

void counter::add(vehicle *v)
{
    this->broj_putnika+=v->passengers();
    std::cout<<v->type()<<", putnika: "<< v->passengers()<<std::endl;
}

unsigned counter::total()
{
    return this->broj_putnika;
}