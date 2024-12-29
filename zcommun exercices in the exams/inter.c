#include <unistd.h>
int check_double(char *str, char c, int position)
{
    int i = 0;
    while (i < position)
    {
        if(str[i] == c)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

void    inter(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if(s1[i] == s2[j])
            {
                if(check_double(s1, s1[i], i) == 1)
                {
                    write(1, &s1[i], 1);
                    break;
                }
            }
            j++;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
}