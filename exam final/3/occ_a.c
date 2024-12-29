int occ_a(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(str[i])
    {
        if (str[i] == 'A')
        {
            count++;
        }
        i++;
    }
    return (count);
}
/*#include <stdio.h>
int main()
{
    char *c = "hAmzaAAA";
    int i = occ_a(c);
    printf("%d", i);
}*/