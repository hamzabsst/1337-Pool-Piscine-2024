#include <stdio.h>

int counter(char *str)
{
    int i = 0;
    int isword = 0;
    int count = 0;
    while (str[i])
    {
        if(str[i] == ' ')
        {
            isword = 0;
        }
        else if(isword == 0)
        {
            count++;
            isword = 1;
        }
        i++;
    }
    return count;
}
int main()
{
    char str[] = "wa drari golo meay a";
    printf("%d", counter(str));
}