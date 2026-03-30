#include <stdbool.h>

bool check_for_factor(int base, int factor) 
{
  // your code here
  if((base % factor) == 0)
    {
    return true;
    }
  else if((base % factor) != 0)
    {
    return false;
    }
}