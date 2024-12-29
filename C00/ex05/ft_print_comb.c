/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:18:05 by hbousset          #+#    #+#             */
/*   Updated: 2024/08/28 13:41:28 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (a < 55)
					write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*int main()
{
	ft_print_comb();
}*/
