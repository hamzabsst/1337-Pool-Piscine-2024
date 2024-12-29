/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:39:29 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/16 13:27:17 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	calcul_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	if (size == 0)
		return (malloc(sizeof(char)));
	result = malloc(sizeof(char) * calcul_total_length(size, strs, sep) + 1);
	if (!result)
		return (NULL);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			result[k++] = strs[i][j];
		j = -1;
		if (i < size - 1)
			while (sep[++j])
				result[k++] = sep[j];
	}
	result[k] = '\0';
	return (result);
}
/*#include <stdio.h>
int main()
{
    char *arr[] = {"hello", "world"};
    char *result = ft_strjoin(3, arr, " , ");
    printf("%s", result);
    free(result);
}*/