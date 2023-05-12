#include <iostream>
#include <math.h>

class tocka
{
    private:
        double x=0, y=0, z=0;
    public:
        void postavi(double x, double y, double z);
        void ispis() const;
        void postavi_rand();
        void udaljenost_2d(tocka &t) const;
        void udaljenost_3d(tocka &t) const;

};

void tocka::postavi_rand()
{
    this->x=(double)rand()/RAND_MAX+rand()%10;
    this->y=(double)rand()/RAND_MAX+rand()%10;
    this->z=(double)rand()/RAND_MAX+rand()%10;
}

void tocka::udaljenost_2d(tocka &t) const
{
    double a=(this->x-t.x)*(this->x-t.x);
    double b=(this->y-t.y)*(this->y-t.y);

    double d=sqrt(a+b);

    std::cout<<"\nudaljenost(2D)="<<d<<std::endl;
}

void tocka::udaljenost_3d(tocka &t) const
{
    double a=(this->x-t.x)*(this->x-t.x);
    double b=(this->y-t.y)*(this->y-t.y);
    double c=(this->z-t.z)*(this->z-t.z);
    
    double d=sqrt(a+b+c);

    std::cout<<"\nudaljenost(3D)="<<d<<std::endl;
}

void tocka::postavi(double a, double y, double z)
{
    this->x=a;
    this->y=y;
    this->z=z;
}

void tocka::ispis() const
{
    std::cout<<"x="<<this->x<<std::endl;
    std::cout<<"y="<<this->y<<std::endl;
    std::cout<<"z="<<this->z<<std::endl;
}

int main()
{
    srand(time(NULL));

    tocka t1, t2;
    
    t1.postavi(4.12, 6.23, 2.34);
    std::cout<<"TOCKA 1"<<std::endl;
    t1.ispis();

    std::cout<<"\nTOCKA 2"<<std::endl;
    t2.postavi(11.23, 3.12, 8.25);
    t2.ispis();

    t1.udaljenost_2d(t2);

    t2.udaljenost_3d(t1);

    tocka t3;
    std::cout<<"\nTOCKA 3"<<std::endl;
    t3.postavi_rand();
    t3.ispis(); 

}