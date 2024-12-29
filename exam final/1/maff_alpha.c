#include <unistd.h>
int main()
{
    write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ", 26);
    write(1, "\n", 1);
}
