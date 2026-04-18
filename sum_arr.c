#include <stddef.h>

int sum_array(const int values[/* count */], size_t count)
{
  size_t i = 0;
   int sum =0;
  if(count == 0)
    {
      return  0;
   }
  while(i < count)
    {
       sum += values[i];
    i++;
    }

    return sum;
}