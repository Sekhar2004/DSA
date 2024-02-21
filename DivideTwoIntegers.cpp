#include <iostream>
#include <limits>

int divideTwoInteger(int dividend, int divisor) 
{
        int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

    
    long long ldividend = std::abs(static_cast<long long>(dividend));
    long long ldivisor = std::abs(static_cast<long long>(divisor));

    long long quotient = 0;

    while (ldividend >= ldivisor)
    {
        ldividend -= ldivisor;
        ++quotient;
    }
        return static_cast<int>(quotient) * sign;


}
