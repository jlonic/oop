#include <iostream>

class vektor
{
    private:
        double *arr;
        int fv;
        int lv;
    public:
        void vector_new();
        void vector_push_back(int n);
        void ispis();
        void vector_size();
        double vector_back();
        void vector_pop_back();
        double vector_front();
        void vector_delete();
};


double vektor::vector_front()
{
    return this->arr[0];
}

void vektor::vector_pop_back()
{
    double temp[this->lv-1]; //u temp niz spremi vrijednosti originalnog niza
    for (int i=0;i<this->lv-1;i++)
    {
        temp[i]=this->arr[i];
    }

    delete [] this->arr; //brise stari
    this->arr=new double[this->fv]; //pravi novi
    this->lv--; //u temp zadnji element nije upisan

    for (int i=0;i<this->lv;i++) 
    {
        this->arr[i]=temp[i];
    }

}
void vektor::vector_delete()
{
    this->fv=0;
    this->lv=0;
    delete [] this->arr;
    this->arr=NULL;
}

double vektor::vector_back()
{
    return this->arr[this->lv-1]; 
}

void vektor::vector_size()
{
    std::cout<<"fizicka velicina="<<this->fv<<std::endl;
    std::cout<<"logicka velicina="<<this->lv<<std::endl;
}

void vektor::ispis()
{
    for (int i=0;i<this->lv;i++)
        {
            std::cout<<this->arr[i]<<std::endl;
        } 
}

void vektor::vector_push_back(int n)
{
    if (this->lv==this->fv)
    {
        double temp[this->fv]; //u temp niz spremi vrijednosti originalnog niza
        for (int i=0;i<this->lv;i++)
        {
            temp[i]=this->arr[i];
        }

        this->fv*=2;
        delete [] this->arr; //brise stari
        this->arr=new double[this->fv]; //pravi novi

        for (int i=0;i<this->lv;i++) //iz temp niza upisuje originalne vrijednosti
        {
            this->arr[i]=temp[i];
        }
    }

    this->arr[this->lv]=n;
    this->lv++;
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
    }
    this->arr=new double[this->fv];
    this->lv=0;
}

int main()
{
    vektor v;
    v.vector_new(); 

    v.vector_push_back(10);
    v.vector_push_back(11);
    v.vector_push_back(30);
    v.vector_push_back(25);
    v.vector_push_back(5);
    //v->ispis();

    //v->vector_size();

    std::cout<<"vector_back="<<v.vector_back()<<std::endl; //prije pop back
    v.vector_pop_back();
    std::cout<<"vector_back="<<v.vector_back()<<std::endl; //nakon pop back
    v.vector_size();

    std::cout<<"vector_front="<<v.vector_front()<<std::endl;

    v.ispis();
    v.vector_delete();
}