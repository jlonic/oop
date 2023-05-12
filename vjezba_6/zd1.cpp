#include "zd1.h"
#include <iostream>


Kukac::Kukac()
{
    this->brojnogu=6;
}

unsigned Kukac::broj_nogu()
{
    return this->brojnogu;
}

Pauk::Pauk()
{
    this->brojnogu=8;
}

unsigned Pauk::broj_nogu()
{
    return this->brojnogu;
}

Ptica::Ptica()
{
    this->brojnogu=2;
}

unsigned Ptica::broj_nogu()
{
    return this->brojnogu;
}

tarantula::tarantula()
{
    this->vrsta_zivotinje="tarantula";
}

std::string tarantula::vrsta()
{
    return this->vrsta_zivotinje;
}

zohar::zohar()
{
    this->vrsta_zivotinje="zohar";
}

std::string zohar::vrsta()
{
    return this->vrsta_zivotinje;
}
vrabac::vrabac()
{
    this->vrsta_zivotinje="vrabac";
}

std::string vrabac::vrsta()
{
    return this->vrsta_zivotinje;
}

void Brojac::dodaj(Zivotinja *z)
{
    std::cout<<"dodan: "<<z->vrsta()<<std::endl;
    this->ukupan_broj_nogu+=z->broj_nogu();
}

unsigned Brojac::total()
{
    return this->ukupan_broj_nogu;
}