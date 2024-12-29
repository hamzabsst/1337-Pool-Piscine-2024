/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:15:15 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/07 15:18:50 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char str[])
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

int	comp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_param(int arc, char **arv)
{
	int		i;
	char	*swp;

	i = 1;
	while (i < arc - 1)
	{
		if (comp(arv[i], arv[i + 1]) > 0)
		{
			swp = arv[i];
			arv[i] = arv[i + 1];
			arv[i + 1] = swp;
			i = 0;
		}
		i++;
	}
}

int	main(int arc, char *arv[])
{
	int	i;

	i = 1;
	while (i < arc)
	{
		ft_sort_param(arc, arv);
		ft_putstr(arv[i++]);
	}
}
