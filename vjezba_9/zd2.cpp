#include <iostream>
#include "zd2.h"


template <class S>
Stack<S>::Stack(int n)
{
    this->arr=new S[n];
    this->n=0;
}

template <class S>
void Stack<S>::push(S var)
{
    this->arr[this->n]=var;
    this->n+=1;
}

template <class S>
void Stack<S>::print()
{
    for (int i=0;i<this->n;i++)
        std::cout<<this->arr[i]<<std::endl;
}

template <class S>
S Stack<S>::pop()
{
    int n=this->n-1; 
    Stack <char>temp(n);
    temp.arr=new S[n];
    for (int i=0;i<n;i++)
        temp.arr[i]=this->arr[i]; 

    delete [] this->arr; 
    this->arr=NULL;
    this->n-=1;
    this->arr=new S[this->n]; 
    
    for (int i=0;i<n;i++)
        this->arr[i]=temp.arr[i];

    delete [] temp.arr;
    temp.arr=NULL;

    return this->arr[this->n];
}

template <class S>
bool Stack<S>::is_empty()
{
    if (this->n==0)
    {
        std::cout<<"PRAZAN"<<std::endl;
        return 0;
    }

    std::cout<<"NIJE PRAZAN"<<std::endl;
    return 1;
}


int main()
{
    Stack<char> s(3);
    s.push('q');
    s.push('w');
    s.push('e');
    //s.print(); //provjera za push
    
    s.pop();
    //s.print(); //provjera za pop

    s.is_empty(); //nije prazan
    s.pop(); 
    s.is_empty(); //nije prazan
    s.pop();
    s.is_empty(); //prazan
    

}