#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
void print( int i)
{
    std::cout<< "N: "<<i<<std::endl;
}

template<typename T, typename F>

void hiter(T *array, const int size, F func)
{
    int i = 0;

    while( i < size)
    {
        func(array[i]);
        i++;
    }   
}

#endif