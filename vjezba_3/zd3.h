#ifndef ZD3_H
#define ZD3_H

class oruzje
{
    private:    
        int x,y,z; //koord
        const int br_metaka=100; //max br metaka
        int trenutni_br_metaka;
    public:
        void polozaj(int x, int y, int z);
        void ispis() const;
        void shoot();
        void reload();
};

#endif