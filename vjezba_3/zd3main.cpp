#include "zd3.h"
#include <iostream>

int main()
{
    oruzje o;
    int x=rand()%10, y=rand()%10, z=rand()%10;
    
    o.polozaj(x,y,z);
    o.shoot();
    o.reload();
    o.ispis();
}