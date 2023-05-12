#ifndef ZD2_H
#define ZD2_H

#include <iostream>
template <class S>
class Stack
{
    private:
        S* arr;
        int n;
    public:
        Stack();
        Stack(int size);
        void push(S);
        S pop();
        void print();
        bool is_empty();
    
};

#endif