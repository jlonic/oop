#include <iostream>
#include <string>
#include <list>

void print(std::list<std::string> &l)
{
    for (std::list<std::string>::iterator i=l.begin();i!=l.end();i++)
    {
        std::cout<<*i<<std::endl;
    }
}

void izbaci_najduzi(std::list<std::string> &l)
{
    std::string temp;
    std::list<std::string>::iterator t=l.begin();
    std::string najduzi=*l.begin();
    for (std::list<std::string>::iterator i=l.begin();i!=l.end();i++)
    {
        temp=*i;
        if (najduzi.size()<temp.size())
        {
            najduzi=*i;
            t=i;
        }
    }
    l.erase(t);
}

void prosjecna_duljina(std::list<std::string> &l)
{
    int pd=0;//prosjecna duljina
    int br=0;
    std::string temp;
    for (std::list<std::string>::iterator i=l.begin();i!=l.end();i++)
    {
        temp=*i;
        br+=temp.size();
    }
    pd=br/l.size(); //ukupna duljina/broj elemenata
    std::cout<<"prosjecna duljina rjeci je "<<pd<<std::endl;
}

void ukupan_br(std::list<std::string> &l)
{
    int br=0;
    std::string temp;
    for (std::list<std::string>::iterator i=l.begin();i!=l.end();i++)
    {
        temp=*i;
        br+=temp.size();
    }
    std::cout<<"ukupan broj znakova je "<<br<<std::endl;
}

int main()
{
    std::list<std::string> lista;
    std::string s;
    for(int i=0;i<3;i++)
    {
        std::cout<<"unesite "<<i+1<<". string"<<std::endl;
        std::cin>>s;
        lista.push_back(s);
    }

    //print(lista); //ispis liste prije izbacivanja najduzeg elementa
    ukupan_br(lista);
    prosjecna_duljina(lista);
    izbaci_najduzi(lista);
    print(lista); //ispis nakon sto se izbaci najdulji element
}