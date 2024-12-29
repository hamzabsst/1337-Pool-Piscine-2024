#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if(str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if(str[i] == '+')
    {
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        result = result * 10;
        result = result + str[i] - 48;
        i++; 
    }
    return (result * sign);
}

int main()
{
    char c[] = "  -4874";
    printf("%d", ft_atoi(c));
}