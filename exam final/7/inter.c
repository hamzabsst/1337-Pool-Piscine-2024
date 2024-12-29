#include <unistd.h>

int main (int arc,char **arv)
{
    int i = 0;
    int j;
    int asci[256] = {0};

    if(arc == 3)
    {
        while(arv[1][i])
        {
            j = 0;
            while (arv[2][j])
            {
                if (arv[1][i] == arv[2][j])
                {
                    if(asci[arv[1][i]] == 0)
                    {
                        write (1, &arv[1][i], 1);
                        asci[arv[1][i]] = 1;
                    }
                }
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}