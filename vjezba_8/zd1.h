#ifndef ZD1_H
#define ZD1_H

#include <iostream>

class money 
{
    private:
        int kn;
        int lp;
    public:
        money(int kn, int lp=0);
        money operator+(money &racun);
        money operator-=(money &racun);
        money operator+=(money &racun);
        friend std::ostream& operator<<(std::ostream &os, const money &racun);
        operator double();
};

#endif