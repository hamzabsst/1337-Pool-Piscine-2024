/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:34:55 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/16 11:39:22 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (min >= max)
		return (NULL);
	if (array == NULL)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
