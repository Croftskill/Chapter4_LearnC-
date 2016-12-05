#include <math.h>


template <typename T>
int solution(T A[], T N);

template <>                     // To prevent implicit convertions from other types.
int solution(int A[], int N)
{

if( N <= 0)
return -1;

int equ_lower = 0, equ_higher = 0;
long int sum_low = 0, sum_high;


for(int equilibrium = 0; equilibrium < N -1; ++equilibrium)
{
        for(equ_lower = 0; equ_lower < equilibrium; ++equ_lower)
        sum_low += A[equ_lower];
        for(equ_higher = N -1; equ_higher > equilibrium; --equ_higher)
        sum_high+= A[equ_higher];
        if(sum_low == sum_high)
        return equilibrium;
sum_low = 0;
sum_high = 0;

}

return -1;
}

