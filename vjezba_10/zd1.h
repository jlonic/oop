#ifndef ZD1_H
#define ZD1_H

#include <fstream>

class error
{
    public:
        virtual std::string greska()=0;
};

class divide_by_zero:public error
{
    public:
	    std::string greska(){return "divide by zero";};
};

class invalid_operation:public error
{
    public:
        std::string greska(){return "invalid operation";};
};

class not_a_number:public error
{
    public:
        std::string greska(){return "not a number";}
};

class errors_log
{
    public:
        errors_log(std::string time, std::string error);
};

int broj();
char oper();
double aritmetika(int br1, int br2, char op);

#endif