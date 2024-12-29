#include <unistd.h>
int main(int arc, char **arv)
{
    int i;

    if (arc == 2)
    {
        i = 0;
        while (arv[1][i])
        {
            i++;
        }
        i--;
        while (arv[1][i] && (arv[1][i] == '\t' || arv[1][i] == 32))
        {
            i--;
        }
        while (arv[1][i] != '\t' && arv[1][i] && arv[1][i] != 32)
        {
            i--;
        }
        i++;
        while (arv[1][i] != '\t' && arv[1][i] && arv[1][i] != 32)
        {
            write(1, &arv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}