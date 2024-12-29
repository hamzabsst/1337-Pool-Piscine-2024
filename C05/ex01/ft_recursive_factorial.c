/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:54:54 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/08 12:59:32 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb > 0)
	{
		r = r * nb * ft_recursive_factorial(nb - 1);
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
    int c = ft_recursive_factorial(5);
	ft_putnbr(c);
}*/
