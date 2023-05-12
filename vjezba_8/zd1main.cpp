#include "zd1.h"
#include <iostream>

int main() 
{
    // zadan je jednostavan cjenik
    money juha(11,30), becki(15,50), salata(10), pivo(15), babic(16,40);
    // gost je konzumirao:
    money racun = juha + becki + salata + pivo;
    // na zalost nas konobar je nepazljiv pa pivo treba stornirati
    racun -= pivo;
    // i dodati babic
    racun += babic;
    
    std::cout<<double(racun)<<std::endl; //ispisuje 1 broj (53.2)
    std::cout << racun << std::endl; //ispisuje 53 kuna, 20 lipa
}