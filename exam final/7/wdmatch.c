#include <unistd.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
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

int main(int arc, char **arv)
{
    int i = 0;
    int j = 0;
    int size = 0;
    if (arc == 3)
    {
        while (arv[1][i])
        {
            while (arv[2][j])
            {
                if (arv[1][i] == arv[2][j])
                {
                    size++;
                    break;
                }
                j++;
            }
            i++;
        }
    }
    if(size == ft_strlen(arv[1]))
    {
        ft_putstr(arv[1]);
    }
    write(1, "\n", 1);
}