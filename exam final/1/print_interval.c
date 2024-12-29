#include <unistd.h>

int main(int arc, char **arv)
{
    int i;

    if (arc == 2)
    {
        i = 0;
        while (arv[1][i])
        {
            if (i % 3 == 0 && i % 5 == 0 && i != 0)
            {
                write (1, "5", 1);
            }
            else if (i % 5 == 0 && i != 0)
            {
                write (1, "3", 1);
            }
            else if (i % 3 == 0 && i != 0)
            {
                write (1, "5", 1);
            }
            else
            {
                write(1 , &arv[1][i], 1);
            }
            i++;
        }
    }
    write (1, "\n", 1);
}