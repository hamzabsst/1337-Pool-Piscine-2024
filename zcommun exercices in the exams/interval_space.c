#include <unistd.h>
/*
void intervalspace(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        if(str[i + 1] == '\0')
            break;
        write(1, "   ",3);
        i++;
    }
}
*/

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while (av[1][i])
        {
            write(1, &av[1][i], 1);
            if(av[1][i + 1] == '\0')
                break;
            write(1, "   ", 3);
            i++;
        }
    }
    write(1, "\n", 1);
}