#include <unistd.h>

void putnbr(int nb)
{
    if(nb > 9)
    {
        putnbr(nb / 10);
        putnbr(nb % 10);
    }
    else if(nb <= 9)
    {
        nb = nb + 48;
        write(1, &nb, 1);
    }
}
void fizz(void)
{
    int i;

    i = 0;
    while(i < 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            write(1, "fizzbuzz", 8);
        }
        else if (i % 3 == 0)
        {
            write(1, "fizz", 4);
        }
        else if (i % 5 == 0)
        {
            write(1, "buzz", 4);
        }
        else
        {
            putnbr(i);
        }
        i++;
        write(1, "\n", 1);
    }
}
int main()
{
    fizz();
}