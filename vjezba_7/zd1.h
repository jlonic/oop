#ifndef ZD1_H
#define ZD1_H

#include <iostream>

class vehicle
{
    public:
        virtual std::string type()=0;
        virtual unsigned passengers()=0;
};

class watercraft:virtual public vehicle
{
    private:
        std::string tip_vozila;
    public:
        watercraft();
        std::string type(); //return tip_vozila
};

class aircraft:virtual public vehicle
{
    private:
        std::string tip_vozila;
    public:
        aircraft();
        std::string type(); //return tip_vozila
};

class ferry:public watercraft
{
    private:
        unsigned broj_putnika;
    public:
        ferry(unsigned broj_putnika, unsigned broj_bicikli, unsigned broj_automobila);
        unsigned passengers(); //return broj_putnika
};

class catamaran:public watercraft
{
    private:
        unsigned broj_putnika;
    public:
        catamaran(unsigned broj_putnika);
        unsigned passengers(); //return broj_putnika
};

class seaplane:public watercraft, public aircraft
{
    private:
        unsigned broj_putnika;
        std::string tip_vozila;
    public:
        seaplane(unsigned broj_putnika);
        unsigned passengers(); //return broj_putnika
        std::string type(); //return tip_vozila
};

class counter
{
    private:
        unsigned broj_putnika;
    public:
        void add(vehicle *v); //ispisuje tip vozila i broj putnika, zbraja putnike
        unsigned total(); //return broj_putnika
};


#endif