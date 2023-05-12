#include <iostream>
#include "zd2.h"

void Board::draw_line(const Point &p1, const Point &p2, char simbol)
{
    int p1x=(int)p1.x+0.5;
    int p1y=(int)p1.y+0.5;
    int p2x=(int)p2.x+0.5;
    int p2y=(int)p2.y+0.5;

    this->matrica[p1x][p1y]=simbol;
    this->matrica[p2x][p2y]=simbol;
    
    if (p1x==p2x)
    {
        int y_razlika=std::abs(p1y-p2y);
        if (p1y>p2y)
        {
            for (int i=0;i<y_razlika;i++)
                this->matrica[p1x][p1y-i]=simbol;
        }
        if (p1y<p2y)
        {
            for (int i=0;i<y_razlika;i++)
                this->matrica[p1x][p2y-i]=simbol;
        }
    }

    if (p1y==p2y)
    {
        int x_razlika=std::abs(p1x-p2x);
        if (p1x>p2x)
        {
            for (int i=0;i<x_razlika;i++)
                this->matrica[p1x-i][p1y]=simbol;
        }
        if (p1x<p2x)
        {
            for (int i=0;i<x_razlika;i++)
                this->matrica[p2x-i][p1y]=simbol;
        }
    }

    if (p1x>p2x && p1y>p2y)
    {
        int x_razlika=std::abs(p1x-p2x);
        for (int i=0;i<x_razlika;i++)
            this->matrica[p1x-i][p1y-i]=simbol;
    }
    if (p1x<p2x && p1y<p2y)
    {
        int x_razlika=std::abs(p1x-p2x);
        for (int i=0;i<x_razlika;i++)
            this->matrica[p1x+i][p1y+i]=simbol;
    }
    
}

void Board::draw_char(const Point &p, char simbol)
{
    int px=(int)p.x;
    int py=(int)p.y;

    for (int i=0;i<this->x;i++)
    {
        for (int j=0;j<this->y;j++)
        {
            if (i==px && j==py)
                this->matrica[i][j]=simbol;
        }
    }
}

void Board::draw_up_line(const Point &p, char simbol)
{
    int px=(int)p.x;
    int py=(int)p.y;

    this->matrica[px][py]=simbol;

    for (int i=px;i>0;i--)
    {
        this->matrica[i][py]=simbol;
    }
}

Board::~Board()
{
    for (int i=0;i<this->x;i++) 
    {
        delete [] this->matrica[i];
        this->matrica[i]=NULL;
    }
    delete [] this->matrica;
    this->matrica=NULL;
    //std::cout<<"DESTRUKTOR"<<std::endl;
}

Board::Board(const Board &b)
{
    this->simbol=b.simbol;
    this->x=b.x;
    this->y=b.y;
    this->matrica=new char*[b.x];

    for (int i=0;i<b.x;i++)
    {
        this->matrica[i]=new char[b.y];
    }
    for (int i=0;i<b.x;i++)
    {
        for (int j=0;j<b.y;j++)
            this->matrica[i][j]=b.matrica[i][j];
    }
}

Board::Board()
{
    this->x=10;
	this->y=20;

    std::cout<<"unesite simbol za okvir: "<<std::endl;
    std::cin>>this->simbol;

	this->matrica=new char*[10];

	for (int i=0;i<10;i++)
		this->matrica[i]=new char[20];

	for (int i=0;i<10;i++)
	{
		for (int j=0;j<20;j++)
		{
			if ((i==0) || (i==9))
				this->matrica[i][j]=simbol;
            else if (j==0 || j==19)
                this->matrica[i][j]=simbol;
			else
				this->matrica[i][j]=' ';
		}
	}
}

Board::Board(int n, int m)
{
    this->x=n;
	this->y=m;

    std::cout<<"unesite simbol za okvir: "<<std::endl;
    std::cin>>this->simbol;

	this->matrica=new char*[n];

	for (int i=0;i<n;i++)
		this->matrica[i]=new char[m];

	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if ((i==0) || (i==n-1))
				this->matrica[i][j]=simbol;
			else if ((j==0) || (j==m-1))
				this->matrica[i][j]=simbol;
            else
                this->matrica[i][j]=' ';
		}
	}
}

void Board::display()
{
    for (int i=0;i<this->x;i++)
	{
		for (int j=0;j<this->y;j++)
			std::cout<<this->matrica[i][j]<< " ";
		std::cout<<std::endl;
	}
}