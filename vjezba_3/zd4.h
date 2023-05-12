#ifndef ZD4_H
#define ZD4_H

class tocka
{
    private:
        int x, y, z;
    public:
        void generiraj_dl();
        void generiraj_gd(tocka &t); //2 funkcije generiraj tako da gd tocka uvijek bude veca od dl tocke
        void ispis();
        void get(int *x, int *y, int *z);
        void set(int x, int y, int z);
};

class meta
{
    private:
        tocka donja_lijeva, gornja_desna;
        bool pogodena;
    public:
        void generiraj();
        void ispis();
        bool pogodak(tocka &t);
};

#endif