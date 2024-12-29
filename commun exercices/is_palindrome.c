#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

char *is_palindrome(char *str)
{
    int i = 0;
    int j = ft_strlen(str) - 1;

    while (i <= j)
    {
        if(str[i] != str[j])
            return ("\n");
        i++;
        j--;
    }
    return str;
}

int main()
{
    char str[] = "hggg";
    printf("%s", is_palindrome(str));
}

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    write(1, "42\n", 3);
}