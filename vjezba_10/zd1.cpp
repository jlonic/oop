#include <iostream>
#include "zd1.h"

int broj() //unos broja
{
    int br;
    std::cout<<"unesi broj"<<std::endl;
    std::cin>>br;
    if (std::cin.fail())
		throw not_a_number();
	return br;
}

char oper() //unos operacije
{
    char op;
    std::cout<<"unesi '+', '-', '*', '/' ili '%'"<<std::endl;
    std::cin>>op;
    if ((op!='+') && (op!='-') && (op!='*') && (op!='/') && (op!='%'))
        throw invalid_operation();
    return op;
}

double aritmetika(int br1, int br2, char op)
{
    if (op=='/' && br2==0)
        throw divide_by_zero();

    if (op=='+')
        return br1+br2;
    else if (op=='-')
        return br1-br2;
    else if (op=='*')
        return br1*br2;
    else if (op=='/')
        return (double)br1/(double)br2;
    else
        return br1%br2;
}

errors_log::errors_log(std::string time, std::string error)
{
	std::ofstream os("errors.log", std::ios_base::out | std::ios_base::app);
	os<<time<<error<<std::endl;
}
