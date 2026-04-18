#include <inttypes.h>
#include <stddef.h>

void powers_of_two (size_t n, uint64_t powers[n + 1])
{
    // fill the powers[] array
  size_t i = 0;
  while(i <= n)
    {
       powers[i] = 1ULL << i;
    i++;
    }
}