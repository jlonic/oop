#include <iostream>
#include <vector>

typedef double elem;
typedef std::vector<elem>vektor;

void unos(vektor &v)
{
    elem n;
    std::cout<<"unesi broj: "<<std::endl;
    std::cin>>n;
    v.push_back(n);
}
void print(vektor &v)
{
    for (int i=0;i<v.size();i++)
        std::cout<<v.at(i)<<",";
    std::cout<<std::endl;
    
}
void generiraj(vektor &v, int n)
{
    int temp, br=0;
    for(int i=0;i<n;i++)
    {
        temp=(rand()%3)+1;
        br=br+temp;
        v.push_back(br);
    }
}

vektor novi_vektor(vektor &v1, vektor &v2)
{
    vektor v;
    for (int i=0;i<v1.size();i++)
    {
        for (int j=0;j<v2.size();j++)
        {
            if (v1.at(i)==v2.at(j))
            {
                v.push_back(v1.at(i));
            }
        }
    }
    return v;
}
int main()
{
    srand(time(NULL));
    vektor v1;
    generiraj(v1,10);
    vektor v2;
    generiraj(v2,10);

    vektor v=novi_vektor(v1, v2);
    
    std::cout<<"VEKTOR 1=";
    print(v1);
    std::cout<<"VEKTOR 2=";
    print(v2);

    std::cout<<"NOVI VEKTOR=";
    print(v);
}