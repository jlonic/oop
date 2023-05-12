#include <iostream>
#include "zd3.h"
#include "zd4.h"

int main()
{
    srand(time(NULL));

    oruzje o;
    int x=rand()%10, y=rand()%10, z=rand()%10;
    o.polozaj(x,y,z);
    o.reload();

    int n;
    std::cout<<"unesite n"<<std::endl;
    std::cin>>n;
    while (n<1)
    {
        std::cout<<"pogresan unos"<<std::endl;
        std::cin>>n;
    }

    meta *m=new meta[n];
    for (int i=0;i<n;i++)
    {
        m[i].generiraj();
        //m[i].ispis();
    }

    int broj=0;
    tocka t;
    t.set(x,y,z);

    int f=0;
    for (int i=0;i<n;i++)
    {
        f=0;
        o.shoot();
        f=m[i].pogodak(t);
        if (f==1)
        {
            broj++;
        }
        
    }
    std::cout<<"POGODENO JE "<<broj<<" META"<<std::endl;

    
}