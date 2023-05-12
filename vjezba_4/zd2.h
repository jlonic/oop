#ifndef ZD2_H
#define ZD2_H

typedef struct Point
{
    double x,y;
    Point(double a, double b)
    {
        x=a;
        y=b;
    };
}Point;

class Board
{
    private:
        int x,y;
        char **matrica;
        char simbol;
    public:
        Board();
        Board(int x, int y);
        Board(const Board &b);
        ~Board();
        void display();
        void draw_char(const Point &p, char simbol);
        void draw_up_line(const Point &p, char simbol);
        void draw_line(const Point &p1, const Point &p2, char simbol);
};

#endif