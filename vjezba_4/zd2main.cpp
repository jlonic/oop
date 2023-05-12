#include <iostream>
#include "zd2.h"

int main()
{
    Board b(10,20);
    //Board b;
    Point p1(2,2);
    Point p2(7,7);

    //b.draw_char(p1, 'x');

    Point p3(7,13);
    b.draw_up_line(p3, 'x');
    b.draw_line(p1, p2, 'o');
    b.display();

}