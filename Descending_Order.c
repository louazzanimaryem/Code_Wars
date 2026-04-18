#include <inttypes.h>
#include <stdio.h>

uint64_t descendingOrder(uint64_t n)
{
    uint64_t res = 0;
    int count[10] = {0};
    
    
    if (n == 0) 
        return 0;
    
    while (n > 0)
    {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (int d = 9; d >= 0; d--)
    {
        while (count[d] > 0)
        {
            res = res * 10 + d;
            count[d]--;
        }
    }

    return res;
}