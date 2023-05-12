#include "zd1.h"
#include <iostream>
#include <vector>

int main()
{
    Book b1("Aldous Huxley", "Brave New World", 286);
    Book b2("autor", "knjiga", 1234);
    EBook e1("Aldous Huxley", "knjiga", 121, 1.23, "ime.pdf");
    EBook e2("autor", "Brave New World", 221, 2.33, "ime.pdf");
    HardCopyBook h1("Aldous Huxley", "naslov", 1222, 50);
    HardCopyBook h2("Aldous Huxley", "knjiga br 4", 1111, 123);

    Library l;
    l.set(b1);
    l.set(b2);
    l.set(e1);
    l.set(e2);
    l.set(h1);
    l.set(h2);

    std::vector<std::string>s=l.vrati_naslove_autora("Aldous Huxley"); //radi

    for(int i=0;i<s.size();i++) //ispis svih naslova jednog autora
        std::cout<<s[i]<<std::endl;

    
    //double velicina=l.vrati_velicinu_MB("Aldous Huxley"); //nedovrseno/ne radi, treba popraviti
    //std::cout<<"ukupna vel je: "<<velicina<<std::endl;


    //treci dio nije rjesen (metodu koja za neki dio naslova (jedna ili više riječi) vraća sve knjige koje sadrže te rijeci)

}