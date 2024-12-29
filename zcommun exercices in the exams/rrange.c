#include <stdlib.h>
/*
int *ft_rrange(int start, int end)
{
    int size;
    int i;
    int *rrange;

    if(start >= end)
        size = start - end + 1;
    else
        size = end - start + 1;
    
    rrange = malloc(sizeof(int) * (size));

    i = 0;
    if (start >= end)
    {
        while (start >= end)
        {
            rrange[i++] = end++;
        }
    }
    else
    {
        while (start <= end)
        {
            rrange[i++] = end--;
        }
    }
    return rrange;
}*/

int *ft_rrange(int start, int end)
{
    int size;
    int *rrange;

    if(start >= end)
        size = start - end + 1;
    else
        size = end - start + 1;

    rrange = malloc(sizeof(int) * (size));
    int i = 0;
    if(start >= end)
    {
        while (start >= end)
        {
            rrange[i++] = end++;
        }
    }
    else
    {
        while (start <= end)
        {
            rrange[i++] = end--;
        }
    }
    return rrange;
}
#include <stdio.h>
int main()
{
    int start = 3;
    int end = -4;
    int *arr = ft_rrange(start, end);
    int i = 0;
    int size;
    if(start >= end)
        size = start - end + 1;
    else
        size = end - start + 1;
    while(i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
}