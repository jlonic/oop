#include <iostream>
#include <math.h>

typedef struct krug
{
    int x,y;
    int r;
}krug;

typedef struct pravokutnik
{
    int x,y;
    int sirina, visina;
}pravokutnik;

pravokutnik* postavi_p(int &n)
{
    pravokutnik *p=new pravokutnik[n];
    int a=rand()%10;
    for (int i=0;i<n;i++)
    {
        p[i].x=rand()%15-a; 
        p[i].y=rand()%15-a;
        p[i].sirina=rand()%10+1;
        p[i].visina=rand()%10+1;
    }

    return p;
}

krug postavi_krug(krug &k)
{
    k.r=rand()%10+1;
    k.x=rand()%10;
    k.y=rand()%10;
    return k;
}

void ispis_k(krug &k)
{
    std::cout<<"radius kruznice je: "<<k.r<<std::endl;
    std::cout<<"koordinate su: ("<<k.x<<","<<k.y<<")"<<std::endl;
}

void ispis_p(pravokutnik *p, int &n)
{
    for (int i=0;i<n;i++)
    {   
        std::cout<<"PRAVOKUTNIK "<<i+1<<std::endl;
        std::cout<<"koord su: ("<<p[i].x<<","<<p[i].y<<")"<<std::endl;
        std::cout<<"sirina="<<p[i].sirina<<std::endl;
        std::cout<<"visina="<<p[i].visina<<std::endl;
    }
}

int koliko(const pravokutnik *p, const krug &k, int &n)
{
    int x2[n], y2[n]; //koord desnog donjeg kuta
    int x3[n], y3[n]; //koord desnog gornjeg kuta
    int x4[n], y4[n]; //koord lijevog gornjeg kuta
    for (int i=0;i<n;i++) 
    {
        x2[i]=p[i].x+p[i].sirina;
        y2[i]=p[i].y;

        x3[i]=p[i].x+p[i].sirina;
        y3[i]=p[i].y+p[i].visina;

        x4[i]=p[i].x;
        y4[i]=p[i].y+p[i].visina;
    }

    int broj=0;
    int najbliza_tocka;
    int x,y;
    int br;
    for (int i=0;i<n;i++)
    {
        x=(k.x-p[i].x)*(k.x-p[i].x);
        y=(k.y-p[i].y)*(k.y-p[i].y);
        najbliza_tocka=sqrt(x+y);
        
        x=(k.x-x2[i])*(k.x-x2[i]);
        y=(k.y-y2[i])*(k.y-y2[i]);
        br=sqrt(x+y);

        if (najbliza_tocka>=br)
        {
            najbliza_tocka=br;
        }

        x=(k.x-x3[i])*(k.x-x3[i]);
        y=(k.y-y3[i])*(k.y-y3[i]);
        br=sqrt(x+y);

        if (najbliza_tocka>=br)
        {
            najbliza_tocka=br;
        }

        x=(k.x-x4[i])*(k.x-x4[i]);
        y=(k.y-y4[i])*(k.y-y4[i]);
        br=sqrt(x+y);

        if (najbliza_tocka>=br)
        {
            najbliza_tocka=br;
        }

        if (najbliza_tocka<=k.r)
        {
            broj++;
        }
    }
    return broj;
}

int main()
{
    srand(time(NULL));
    krug k1;
    postavi_krug(k1);
    ispis_k(k1);

    pravokutnik *p1;
    int n;
    std::cout<<"unesite broj pravokutnika: "<<std::endl;
    std::cin>>n;
    p1=postavi_p(n);
    ispis_p(p1, n);
    
    int broj;
    broj=koliko(p1, k1, n);
    std::cout<<"broj pravokutnika koji sijeku kruznicu je: "<<broj<<std::endl;

}