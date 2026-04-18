#include <stdlib.h>
#include <string.h>
//solution must allocate all required memory
//and return a free-able buffer to the caller.

char *disemvowel(const char *str)
{
  int i =0;
  int len = strlen(str);
  char *result = malloc(len + 1);
   if (!result)
    return NULL;
  int j =0;
   while(str[i] != '\0')
   {
      if((str[i] != 'a' && str[i] != 'e' && str[i] != 'u' && str[i] != 'o'&& str[i] != 'i')
        &&(str[i] != 'A' && str[i] != 'E' && str[i] != 'O' && str[i] != 'I' && str[i] != 'U'))
        {
            result[j] = str[i];
         j++;
        }
     i++;
    }            
    result[j] = '\0';
	return result;
}