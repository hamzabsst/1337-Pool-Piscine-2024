/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:07:08 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/18 12:07:11 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	copy = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;

	i = 0;
	array = malloc((ac + 1) * sizeof(t_stock_str));
	if (!array)
		return (NULL);
	while (i < ac)
	{
		array[i].copy = ft_strdup(av[i]);
		if (!array[i].copy)
		{
			while (i--)
				free(array[i].copy);
			free(array);
			return (NULL);
		}
		array[i].str = av[i];
		array[i].size = ft_strlen(av[i]);
		i++;
	}
	array[ac].str = 0;
	return (array);
}
