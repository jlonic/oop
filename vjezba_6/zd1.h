#ifndef ZD1_H
#define ZD1_H

#include <iostream>

class Zivotinja
{
    public:
        virtual std::string vrsta()=0;
        virtual unsigned broj_nogu()=0;
};

class Kukac:virtual public Zivotinja
{
    private:
        unsigned brojnogu;
    public: 
        Kukac();
        unsigned broj_nogu(); //return brojnogu
};

class Pauk:virtual public Zivotinja
{
    private:
        unsigned brojnogu;
    public:
        Pauk();
        unsigned broj_nogu(); //return brojnogu
};

class Ptica:virtual public Zivotinja
{
    private:
        unsigned brojnogu;
    public:
        Ptica();
        unsigned broj_nogu(); //return brojnogu
};

class tarantula:public Pauk
{
    private:
        std::string vrsta_zivotinje;
    public:
        tarantula();
        std::string vrsta(); //return vrsta_zivotinje
};

class zohar:public Kukac
{
    private:
        std::string vrsta_zivotinje;
    public:
        zohar();
        std::string vrsta(); //return vrsta_zivotinje
};

class vrabac:public Ptica
{
    private:
        std::string vrsta_zivotinje;
    public:
        vrabac();
        std::string vrsta(); //return vrsta_zivotinje
};

class Brojac
{
    private:
        unsigned ukupan_broj_nogu=0;
    public:
        void dodaj(Zivotinja *z); //ispisuje dodano, zbraja broj nogu
        unsigned total(); //return ukupan_broj_nogu
};

#endif