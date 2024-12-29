#include <unistd.h>
int main(int arc, char **arv)
{
    int i;

    if (arc > 1)
    {
        i = 0;
        while(arv[arc - 1][i])
        {
            write(1, &arv[arc - 1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}