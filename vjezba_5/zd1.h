#ifndef ZD1_H
#define ZD1_H

#include <iostream>
#include <vector>

class Book
{
    protected:
        std::string autor;
        std::string naslov;
        int godina_izdanja;
    public:
        Book(std::string autor, std::string naslov, int godina_izdanja);
        std::string get_autor();
        std::string get_naslov();
        Book(){}; //?????
};

class HardCopyBook:public Book
{
    private:
        int broj_stranica;
    public:
        HardCopyBook(std::string autor, std::string naslov, int godina_izdanja, int broj_stranica);
};

class EBook:public Book
{
    private:        
        double velicina_MB;
        std::string ime_datoteke;
    public:
        EBook(std::string autor, std::string naslov, int godina_izdanja, double velicina_MB, std::string ime_datoteke);
        double get_velicina_MB();
};

class Library
{        
    private:
        std::vector<Book*> v;
    public:
        void set(Book &b);
        std::vector<std::string> vrati_naslove_autora(std::string autor);
        double vrati_velicinu_MB(std::string autor);    
};

#endif