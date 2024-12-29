#include <unistd.h>

void    print_odd(char *str)
{
    int i;

    i = 0;
    while (str[i])
    { 
        if(i % 2 == 1)
        {
            write(1, &str[i], 1);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        print_odd(av[1]);
    write(1, "\n", 1);
}
