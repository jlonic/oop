#ifndef ZD_5
#define ZD_5
#include <vector>

class Trokut
{
    private:
        int a,b,c; //stranice trokuta
    public:
        Trokut(int a, int b, int c);
        int getA();
        int getB();
        int getC();
        void print();
};

class vekt
{
    private:
        std::vector<Trokut> v;
    public:
        void unos(Trokut &t);
        int najveci_opseg();
        Trokut getTrokut(int a);    
};

#endif