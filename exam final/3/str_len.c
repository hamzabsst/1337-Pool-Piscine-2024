int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}
/*#include <stdio.h>
int main()
{
    char *c = "hamza";
    int i = ft_strlen(c);
    printf("%d", i);
}*/