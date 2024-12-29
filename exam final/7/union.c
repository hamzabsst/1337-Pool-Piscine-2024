#include <unistd.h>
int main (int arc, char **arv)
{
    int i = 0;
    int j = 0;
    char asci[256] = {0};
    if (arc == 3)
    {
    while(arv[1][i])
    {
        if(asci[arv[1][i]] == 0)
        {
            write(1, &arv[1][i], 1);
            asci[arv[1][i]] = 1;
        }
        i++;
    }
    while(arv[2][j])
    {
        if(asci[arv[2][j]] == 0)
        {
            write(1, &arv[2][j], 1);
            asci[arv[2][j]] = 1;
        }
        j++;
    }
    }
    write (1, "\n", 1);
}