#include <iostream>
#include "zd1.h"

int main()
{
    int f=0;
    while (f!=1)
    {
        try
        {
            int br1=broj();
            char op=oper();
            int br2=broj();
            double rez=aritmetika(br1, br2, op); //double zbog djeljenja
            std::cout<<br1<<op<<br2<<"="<<rez<<std::endl;
            //f=1; //prekid petlje nakon uspjesne operacije
        }
        catch(error &e)
        {
            std::string greska=e.greska();
            std::cout<<greska<<std::endl;
            time_t vrijeme=time(0); //Get current time
			std::string str=ctime(&vrijeme); //Convert time_t value to string
			errors_log file(str, greska); //sprema vrijeme i gresku u datoteku
			break; //prekid nakon greske
        }
    }
}