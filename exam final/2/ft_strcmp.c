int    ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
    {
        i++;
    }
    return(s1[i] - s2[i]);
}

/*#include <stdio.h>
int main()
{
    char *s1= "11";
    char *s2= "10";
    int i = ft_strcmp(s1, s2);
    printf("%d", i);

}
#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "10", str2[] = "3";
  int result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  return 0;
}*/