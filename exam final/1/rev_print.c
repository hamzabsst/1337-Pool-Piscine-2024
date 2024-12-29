#include <unistd.h>

int main(int arc, char **arv)
{
    int i;
    int size;

    if (arc == 2)
    {
        size = 0;
        while(arv[1][size])
        {
            size++;
        }
        size--;
        while (size >= 0)
        {
            write (1, &arv[1][size], 1);
            size--;
        }
    }
    write(1, "\n", 1);
}