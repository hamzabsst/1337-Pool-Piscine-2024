#include <stdio.h>
char *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

int main()
{
    char src[] = "its copied";
    char dest[] = "not copied";
    printf("%s", ft_strcpy(dest, src));
}