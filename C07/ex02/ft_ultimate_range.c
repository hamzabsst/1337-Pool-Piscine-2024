/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:36:58 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/16 10:13:35 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tmp;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tmp = malloc(sizeof(int) * size);
	if (!tmp)
		return (-1);
	while (max > min)
	{
		tmp[i] = min;
		i++;
		min++;
	}
	*range = tmp;
	return (size);
	free(tmp);
}
