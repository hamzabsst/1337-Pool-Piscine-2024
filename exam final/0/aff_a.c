#include <unistd.h>

int main (int arc, char **arv)
{
    int j;

    if (arc == 2)
    {
        j = 0;
        while (arv[1][j])
        {
            if (arv[1][j] == 'a')
            {
                write (1, "a", 1);
                break;
            }
                j++;
        }
    }
    else
    {
        write (1, "a", 1);
    }
    write(1, "\n", 1);
}