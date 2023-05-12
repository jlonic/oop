#include <iostream>
#include "zd5.h"

int main()
{
    vekt v;
    
    Trokut t1(1,2,3); 
    Trokut t2(4,5,6);
    Trokut t3(1,5,6);
    v.unos(t1);
    v.unos(t2);
    v.unos(t3);

    int a=v.najveci_opseg(); //a=mjesto trokuta s najduzim opseg u vektoru 
    Trokut t=v.getTrokut(a);
    std::cout<<"stranice najduzeg trokuta su: ";
    t.print();
       
}