#include <stdlib.h>
#include <stdio.h>

int itoa_count(int n)
{
    long nbr = n;
    int count = 0;
    if(nbr == 0)
        return 1;
    else if(nbr < 0)
    {
        count++;
        nbr = -nbr;
    }
    while (nbr > 0)
    {
        count++;
        nbr /= 10;
    }
    return count;
}

char *itoa(int nb)
{
    int len = itoa_count(nb);
    long n = nb;
    char *str = malloc(sizeof(char) * (len + 1));

    if(!str)
        return NULL;
    str[len] = '\0';
    len--;
    if(n == 0)
    {
        str[0] = '0';
        return str;
    }
    if(n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while (n > 0)
    {
        str[len] = (n % 10) + '0';
        len--;
        n /= 10;
    }
    return str;
}

int main()
{
    printf("%s\n", itoa(-10));
    printf("%s\n", itoa(0));
    printf("%s\n", itoa(10));
    printf("%s\n", itoa(-2147483648));
    printf("%s\n", itoa(2147483647));
    return 0;
}