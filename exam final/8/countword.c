int count(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i] == ' ')
        i++;
    while (str[i])
    {
        if (str[i] > 32 && (str[i - 1] == ' ' || i == 0))
            count++;
        i++;
    }
    return (count);
}
#include <stdio.h>
int main()
{
    char *str ="    hamza   ocej ";
    printf("%d", count(str));
}