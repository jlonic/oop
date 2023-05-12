#ifndef ZD1_H
#define ZD1_H

class vektor
{
    private:
        double *arr;
        int fv;
        int lv;
    public: 
        vektor(){vector_new();}
        vektor(int n, int k=0);
        vektor(const vektor &v);
        ~vektor();
        void vector_new();
        void vector_new2();
        void vector_push_back(int n);
        void ispis();
        void vector_size();
        double vector_back();
        void vector_pop_back();
        double vector_front();
        void vector_delete();
};

#endif