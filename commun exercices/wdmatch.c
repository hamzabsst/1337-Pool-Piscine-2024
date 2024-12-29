#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    int i, j, wdlen;
    i = 0;
    j = 0;
    wdlen = 0;
    if(ac == 3)
    {
        while (av[1][i])
        {
            while(av[2][j])
            {
                if(av[1][i] == av[2][j])
                {
                    wdlen++;
                    break;
                }
                j++;
            }
            i++;
        }
        if(wdlen == ft_strlen(av[1]))
            ft_putstr(av[1]);
    }
    write(1, "\n", 1);
}