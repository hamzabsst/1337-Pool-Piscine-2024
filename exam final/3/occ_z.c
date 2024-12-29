int occ_z(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(str[i])
    {
        if (str[i] == 'Z')
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
    char *c = "hAmZZZZZa";
    int i = occ_z(c);
    printf("%d", i);
}*/