#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template<typename s >
void Swap( s a,  s b)
{
    s c;
    c = a;
    a = b;
    b = c;
}

template <typename m>
m min(const m a, const m b)
{
    return (a <  b ? a : b);
}

template <typename ma >
ma max(const ma a, const ma b)
{
    return (a > b ? a  : b);
}


#endif