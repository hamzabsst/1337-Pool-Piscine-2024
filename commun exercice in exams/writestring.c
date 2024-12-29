#include <unistd.h>

void write_string(char *str)
{
    while(*str != '\0')
    {
        write(1,str,1);
        str++;
    }
}
int main()
{
    char *str = "maamoun";
    write_string(str);
}