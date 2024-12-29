#include <unistd.h>
int main(int arc, char **arv)
{
    int i;
    if (arc == 4)
    {
        i = 0;
        if (arv[2][1] == '\0' && arv[3][1] == '\0')
        {
            while (arv[1][i])
            {
                if (arv[1][i] == arv[2][0])
                {
                    arv[1][i] = arv[3][0];
                }
                write (1, &arv[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
}