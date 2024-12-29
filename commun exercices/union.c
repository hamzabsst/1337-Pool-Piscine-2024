#include <unistd.h>

int check_double1(char *str, char c, int diff)
{
    int i = 0;
    while (i < diff)
    {
        if(str[i] == c)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int check_double2(char *str, char c)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return 0;
        i++;
    }
    return 1;
}
void ft_union(char *s1, char *s2)
{
    int i;
    i = 0;

    while (s1[i])
    {
        if(check_double1(s1, s1[i], i)==1)
        {
            write(1, &s1[i], 1);
        }
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if(check_double2(s1, s2[i]) == 1)
        {
            if(check_double1(s2, s2[i], i)==1)
            {
                write(1, &s2[i], 1);
            }
        }
        i++;
    }    
}

int main(int ac, char **av)
{
    if(ac == 3)
        ft_union(av[1], av[2]);
    write(1, "\n", 1);
}