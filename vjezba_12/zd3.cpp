#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <fstream>

int main()
{
    std::vector<int> v;
    std::ifstream f("brojevi.txt");
    std::istream_iterator<int> is(f), ends;
    std::ostream_iterator<int> os(std::cout, "\n");

    copy(is, ends, back_inserter(v));
    copy(v.begin(),v.end(),os);

    //nedovrseno


}