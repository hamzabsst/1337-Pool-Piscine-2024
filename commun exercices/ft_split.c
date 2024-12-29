#include <stdio.h>
#include <stdlib.h>

int isdelimiter(char c)
{
    if(c == ' ' || c == '\t' || c == '\n')
        return 1;
    return 0;
}

int counter(char *str)
{
    int isword = 0;
    int count = 0;
    int i = 0;

    while (str[i])
    {
        if(isdelimiter(str[i]))
        {
            isword = 0;
        }
        else if(isword == 0)
        {
            isword = 1;
            count++;
        }
        i++;
    }
    return count;
}

char *copy_words(char *str, int start, int len)
{
    char *word = malloc(sizeof(char) * (len + 1));
    if(!word)
        return NULL;
    int i = 0;
    while (i < len)
    {
        word[i] = str[start + i];
        i++;
    }
    word[len] = '\0';
    return word;
}

char **ft_split(char *str)
{
    int words = counter(str);
    char **result = malloc(sizeof(char *) * (words + 1));

    if(!result)
        return NULL;
    int i = 0;
    int word_index = 0;
    while (str[i])
    {
        while (str[i] && isdelimiter(str[i]))
        {
            i++;
        }
        if(str[i])
        {
            int start = i;
            int len = 0;
            while (str[i] && !isdelimiter(str[i]))
            {
                i++;
                len++;
            }
            result[word_index] = copy_words(str, start, len);
            if(!result)
                return NULL;
            word_index++;
        }
    }
    result[word_index] = NULL;
    return result;
}

int main()
{
    char str[] = "hello how  are u  come    to bocal   ";
    char **result = ft_split(str);
    int i = 0;
    if(result)
    {
        while (result[i])
        {
            printf("%s", result[i]);
            i++;
        }
    }
}