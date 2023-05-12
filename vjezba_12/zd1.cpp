#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <fstream>
#include <list>

struct point
{
    int x,y,z;
    std::string a,b,c;
};

std::istream& operator>>(std::istream& is, point& p)
{
    return is>>p.x>>p.a>>p.b>>p.c>>p.y>>p.z;
}

std::ostream& operator<<(std::ostream& os, const point& p)
{
    return os<<p.x<<","<<p.a<<","<<p.b<<","<<p.c<<","<<p.y<<","<<p.z<<",";
}

int main()
{
    std::vector<point> v;
    std::ifstream f("wimbledon_double_faults.txt");
    std::istream_iterator<point> is(f), ends;
    std::ostream_iterator<point> os(std::cout, "\n");

    copy(is, ends, back_inserter(v));
    copy(v.begin(),v.end(),os);


    //nedovrseno
}