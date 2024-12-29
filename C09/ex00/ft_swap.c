/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 10:39:51 by hbousset          #+#    #+#             */
/*   Updated: 2024/08/31 10:44:13 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar (nb + 48);
}
int main ()
{
	int x;
	int y;
	x = -100;
	y = -60;

	ft_swap(&x , &y);
	char x1 = x;
	char y1 = y;
	ft_putnbr(x1);
	ft_putchar('\n');
	ft_putnbr(y1);
}*/