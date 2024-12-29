char *ft_strrev(char *str)
{
    int i;
    int size;
    char *results;
    
    size = 0;
    while(str[size])
    {
        size++;
    }
    i = 0;
    while (size > 0)
    {
        results[i] = str[size - 1];
        size--;
        i++;
    }
    results[i]= '\0';
    return (results);
}
#include <stdio.h>
int main()
{
    char *c = "hamza";
    char *s = ft_strrev(c);
    printf("%s", s);
}