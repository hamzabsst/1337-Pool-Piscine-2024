#include <unistd.h>

int main(int arc, char **arv)
{
    int i;
    i = 0;
    if(arc == 2)
    {
        while(arv[1][i])
        {
            while (arv[1][i] == ' ' || arv[1][i] == '\t')
            {
                i++;
            }
            while (arv[1][i] && (arv[1][i] != ' ' && arv[1][i] != '\t'))
            {
               write(1, &arv[1][i], 1);
                i++;
            }

            break;
        }
        
    }
}
       