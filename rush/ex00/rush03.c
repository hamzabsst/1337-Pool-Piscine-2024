/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:33:21 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/01 19:47:28 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	colomb(char A, char B, char C, int x)
{
	int	clmb;

	clmb = 1;
	while (clmb <= x)
	{
		if (clmb == 1)
		{
			ft_putchar(A);
		}
		else if (clmb == x)
		{
			ft_putchar(C);
		}
		else
		{
			ft_putchar(B);
		}
		clmb++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_num;

	line_num = 1;
	if (x > 0 && y > 0)
	{
		while (line_num <= y)
		{
			if (line_num == 1 || line_num == y)
			{
				colomb('A', 'B', 'C', x);
			}
			else
			{
				colomb('B', ' ', 'B', x);
			}
			line_num++;
		}
	}
	else
	{
		return ;
	}
}
