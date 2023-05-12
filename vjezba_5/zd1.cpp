#include "zd1.h"
#include <iostream>

Book::Book(std::string autor, std::string naslov, int godina_izdanja)
{
    this->autor=autor;
    this->naslov=naslov;
    this->godina_izdanja=godina_izdanja;
}

HardCopyBook::HardCopyBook(std::string autor, std::string naslov, int godina_izdanja, int broj_stranica)
{
    this->autor=autor;
    this->naslov=naslov;
    this->godina_izdanja=godina_izdanja;
    this->broj_stranica=broj_stranica;   
}

EBook::EBook(std::string autor, std::string naslov, int godina_izdanja, double velicina_MB, std::string ime_datoteke)
{
    this->autor=autor;
    this->naslov=naslov;
    this->godina_izdanja=godina_izdanja;
    this->velicina_MB=velicina_MB;
    this->ime_datoteke=ime_datoteke;
}

void Library::set(Book &b)
{
    this->v.push_back(&b);
}

std::string Book::get_autor()
{
    return this->autor;
}

std::string Book::get_naslov()
{
    return this->naslov;
}


std::vector<std::string> Library::vrati_naslove_autora(std::string autor)
{
    std::vector<std::string> s;
    for (int i=0;i<v.size();i++)
    {
        if(v[i]->get_autor()==autor)
        {
            s.push_back(v[i]->get_naslov());
        }
    }
    return s;
}

double EBook::get_velicina_MB()
{
    return this->velicina_MB;
}

double Library::vrati_velicinu_MB(std::string autor)
{
    double broj=0;
    for (int i=0;i<v.size();i++)
    {
        if (v[i]->get_autor()==autor)
        {
            //nedovrseno 
        }
    }
    return broj;
}
