int find_even_index(const int *values, int length) 
{
    int i = 0;
    int total_sum = 0;
    int left_sum = 0;

   
    for(i = 0; i < length; i++)
        total_sum += values[i];

    left_sum = 0;
    for(i = 0; i < length; i++)
    {
        int right_sum = total_sum - left_sum - values[i];
        if(left_sum == right_sum)
            return i;
        left_sum += values[i];
    }

    return -1;
}