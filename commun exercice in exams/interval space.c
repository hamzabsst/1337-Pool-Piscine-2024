#include <unistd.h>

int main(int arc, char **argv)
{
    int i;

    i = 0;
    if (arc > 1)
        while(argv[1][i])
        {
            write(1, &argv[1][i], 1);
            if (argv[1][i + 1])
            {
            write(1, "   ", 3);
            }
            i++;
        }
}