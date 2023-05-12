#include <iostream>

typedef struct vektor
{
    int *arr;
    int fv;
    int lv;

}vektor;

void vector_size(vektor *v)
{
    std::cout<<"fizicka velicina="<<v->fv<<std::endl;
    std::cout<<"logicka velicina="<<v->lv<<std::endl;
}

int vector_back(vektor *v)
{
    return v->arr[v->lv-1];
}

int vector_front(vektor *v)
{
    return v->arr[0];
}

void vector_pop_back(vektor *v)
{
    int *temp=new int[v->fv];
    for (int i=0;i<v->lv-1;i++)
    {
        temp[i]=v->arr[i];
    }
    
    delete [] v->arr;
    v->arr=new int[v->fv];
    v->arr=temp;
    v->lv--; 

}

void vector_push_back(vektor *v, int n)
{
    if (v->lv==v->fv)
    {
        int *temp;
        temp=v->arr;
        v->fv*=2;
        v->arr=new int[v->fv];
        v->arr=temp;
    }

    v->arr[v->lv]=n;
    v->lv++;
}

void vector_delete(vektor *v)
{
    v->fv=0;
    v->lv=0;
    delete [] v->arr;
    v->arr=NULL;
    delete v;
}

vektor* vector_new() 
{
    vektor *t=new vektor[sizeof(vektor)];

    int f=1;
    while (f!=0)
    {
        std::cout<<"unesi velicinu: "<<std::endl;
        std::cin>>t->fv;
        if (t->fv==0)
        {
            std::cout<<"pogresan unos, velicina ne smije biti 0"<<std::endl;
        }
        if (t->fv>0)
        {
            f=0;
        }
    }
    t->arr=new int[t->fv];
    return t;
}

void ispis(vektor *v)
{
    for (int i=0;i<v->lv;i++)
    {
        std::cout<<v->arr[i]<<std::endl;
    } 
}

int main()
{
    vektor *v=vector_new();


    vector_push_back(v, 10);
    vector_push_back(v, 11);
    vector_push_back(v, 30);
    vector_push_back(v, 25);
    vector_push_back(v, 5); 
    //ispis(v);

    //vector_size(v);
    std::cout<<"vector_back="<<vector_back(v)<<std::endl; //prije pop back
    vector_pop_back(v);
    std::cout<<"vector_back="<<vector_back(v)<<std::endl; //nakon pop back
    vector_size(v);
    
    std::cout<<"vector_front="<<vector_front(v)<<std::endl;


    ispis(v);
    vector_delete(v);

}