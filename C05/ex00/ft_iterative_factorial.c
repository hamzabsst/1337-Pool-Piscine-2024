/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:53:48 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/09 11:39:28 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	factorial(int nb)
{
	int	r;

	r = 1;
	while (nb > 0)
	{
		r = r * nb;
		nb --;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (r);
}
/*void	ft_putchar(char c)
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
	{
		ft_putchar(nb + 48);
	}
}

int main()
{
    int c = factorial(86);
	ft_putnbr(c);
}*/
