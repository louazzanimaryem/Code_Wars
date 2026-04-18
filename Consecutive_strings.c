#include <stdlib.h>
#include <string.h>

char *longestConsec (const char *const strings[], int arr_len, int k)
{
    if (arr_len == 0 || k > arr_len || k <= 0)
        return calloc(1, 1);

    int max_len = 0;
    int max_index = 0;

    for (int i = 0; i <= arr_len - k; i++)
    {
        int current_len = 0;

        for (int j = 0; j < k; j++)
            current_len += strlen(strings[i + j]);

        if (current_len > max_len)
        {
            max_len = current_len;
            max_index = i;
        }
    }

    char *result = malloc(max_len + 1);
    if (!result)
        return NULL;

    result[0] = '\0';

    for (int j = 0; j < k; j++)
        strcat(result, strings[max_index + j]);

    return result;
}