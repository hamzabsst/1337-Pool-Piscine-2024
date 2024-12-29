/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:35:51 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/07 15:19:41 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putstr(char str[])
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int arc, char **arv)
{
	if (arc > 1)
	{
		while (*arv[0] && arc > 1)
		{
			putstr(arv[arc - 1]);
			arc --;
		}
	}
}
