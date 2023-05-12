#include <iostream>
#include "zd1.h"

int main()
{
    //vektor v; //poziva vector_new funkciju iz prethodnih zadataka za kreiranje niza

    //vektor v1(5); //nije naveden, puni nulama 
    //vektor v1(5,3); //naveden broj 3, puni sa brojem 3
    //v1.ispis();

    vektor v1(3,2);
    vektor v2(v1); //copy
    v1.ispis();
    std::cout<<std::endl;
    v2.ispis(); 

}