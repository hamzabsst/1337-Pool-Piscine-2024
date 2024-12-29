/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 21:31:04 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/06 21:32:01 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	while (av[0][i] && ac >= 1)
	{
		ft_putchar(av[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
