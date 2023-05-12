#include "zd1.h"
#include <iostream>

int main()
{
    Brojac b;
    Zivotinja *z[]={new tarantula, new zohar, new vrabac};

    int velicina=sizeof(z)/sizeof(z[0]);

    for (int i=0;i<velicina;i++)
        b.dodaj(z[i]);

    std::cout<<"ukupno nogu: "<<b.total()<<std::endl;

    for (int i=0;i<velicina;i++)
        delete z[i];
}