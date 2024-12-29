/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:15:46 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/17 20:15:50 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_sep(str[i], charset))
			i++;
	}
	return (count);
}

int	word_length(char *str, char *charset)
{
	int	size;

	size = 0;
	while (str[size] && !is_sep(str[size], charset))
		size++;
	return (size);
}

char	*copy_word(char *str, char *charset)
{
	char	*word;
	int		i;
	int		size;

	size = word_length(str, charset);
	word = malloc(sizeof(char) * (size + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < size)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;

	result = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	i = 0;
	j = 0;
	while (str[j])
	{
		while (str[j] && is_sep(str[j], charset))
			j++;
		if (str[j])
		{
			result[i] = copy_word(&str[j], charset);
			i++;
		}
		while (str[j] && !is_sep(str[j], charset))
			j++;
	}
	result[i] = NULL;
	return (result);
}
/*
#include <stdio.h>

int main()
{
    char str[] = "trust me im way better,than you think :3";
    char charset[] = " ,";
    char **words;
    int i = 0;

    words = ft_split(str, charset);
    while (words[i]) 
    {
        printf("%s",words[i]);

        i++;
    }
    free(words);
    return 0;
}
*/
