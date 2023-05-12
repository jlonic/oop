#include <iostream>

void fun(int niz[], int n, int &max, int &min)
{
    max=niz[0];
    min=niz[0];

    for (int i=0;i<n;i++)
    {
        if (niz[i]>max)
            max=niz[i];
        else if (niz[i]<min)
            min=niz[i];
    }
}

int main()
{
    int max,min;
    int niz[]={6,2,15,7,1,13,4,5};
    int n=sizeof(niz)/sizeof(niz[0]);

    fun(niz,n,max,min);

    std::cout<<"Najveci broj niza je "<<max<<std::endl;
    std::cout<<"Najmanji broj niza je "<<min<<std::endl;
}