int	ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = sign * -1;
        i++;
    }
    if (str[i] == '+')
    {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10;
        result = result + (str[i] - 48);
        i++;
    }
    return (result * sign);
}
/*#include <stdio.h>
int main()
{
    char *c = "-12345";
    int res = ft_atoi(c);
    printf("%d", res);
}*/