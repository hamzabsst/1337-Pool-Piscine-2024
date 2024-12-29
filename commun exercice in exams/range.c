#include <stdlib.h>
/*
int *ft_range(int start, int end)
{
    int size;
    int *range;
    int i;

    if(start >= end)
        size = start - end + 1;
    else
        size = end - start + 1;
    
    range = malloc(sizeof(int) * (size));
    if(!range)
        return NULL;
    
    i = 0;
    if (start >= end)
    {
        while(start >= end)
        {
            range[i++] = start--;
        }
    }
    else
    {
        while (start <= end)
        {
            range[i++] = start++;
        }
    }
    return range;
}*/

int *ft_range(int start, int end)
{
    int size;
    int *range;

    if(start >= end)
        size = start - end + 1;
    else if(start <= end)
        size = end - start + 1;
    
    range = malloc(sizeof(int) + (size));

    int i = 0;
    if(start >= end)
    {
        while (start >= end)
        {
            range[i++] = start--;
        }
    }
    else
    {
        while (start <= end)
        {
            range[i++] = start++;
        }
    }
    return range;
}

#include <stdio.h>

int main()
{
    int start = 4;
    int end = 7;
    int *arr = ft_range(start, end);
    int i = 0;
    int size;
    if(start >= end)
        size = start - end + 1;
    else
        size = end - start + 1;
    while (i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
    
}
