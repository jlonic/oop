#include <iostream>
#include "zd1.h"


vektor::vektor(const vektor &v)
{
    this->arr=new double [v.fv];
    for (int i=0;i<v.fv;i++)
    {
        this->arr[i]=v.arr[i];
    }
    this->fv=v.fv;
    this->lv=v.lv;
    std::cout<<"COPY KONSTRUKTOR"<<std::endl;
}

void vektor::ispis()
{
    for (int i=0;i<this->lv;i++)
        {
            std::cout<<this->arr[i]<<std::endl;
        } 
}

void vektor::vector_new()
{
    int f=1;
    while (f!=0)
    {
        std::cout<<"unesi velicinu: "<<std::endl;
        std::cin>>this->fv;
        if (this->fv==0)
        {
            std::cout<<"pogresan unos, velicina ne smije biti 0"<<std::endl;
        }
        if (this->fv>0)
        {
            f=0;
        }
        std::cout<<"KONSTRUKTOR"<<std::endl;
    }
    this->arr=new double[this->fv];
    this->lv=0;
}

vektor::vektor(int n, int k)
{
    this->arr=new double[n];
    this->fv=n;
    for (int i=0;i<n;i++)
    {
        this->arr[this->lv]=k;
        this->lv++;
    }
    std::cout<<"KONSTRUKTOR"<<std::endl;
}

vektor::~vektor()
{
    this->fv=0;
    this->lv=0;
    delete [] this->arr;
    this->arr=NULL;
    std::cout<<"DESTRUKTOR"<<std::endl;
}