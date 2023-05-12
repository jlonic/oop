#include <iostream>

std::string ispravi(std::string &s)
{
    std::string str;
    int velicina=s.size();
    char temp;
    for (int i=0;i<velicina;i++)
    {
        if ((s.at(i)==' ' ) && (s.at(i+1)==',')) //ispravlja ' ,'
        {
            str+=s.at(i+1);
            str+=s.at(i);
            i+=2;
        }
        if ((s.at(i)==' ') && (s.at(i+1)==' ')) //ispravlja dvostruki razmak
            i++;  
        if ((s.at(i)==' ') && s.at(i+1)=='.') //ispravlja razmak prije tocke
            i++;
        temp=s.at(i);
        str+=temp;
    }

    if (str.back()!='.') //dodaje . na kraj
        str+='.';

    str[0]=toupper(str[0]); //prvi znak=uppercase
    
    return str;
}

int main()
{
    std::string s="Ja bih ,ako ikako mogu,  ovu recenicu napisala ispravno .";
    std::string s2=ispravi(s);
    std::cout<<s2;
}