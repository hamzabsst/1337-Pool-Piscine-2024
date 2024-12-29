/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:56:57 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/09 11:42:20 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power - 1 >= 0)
	{
		r = r * nb * ft_recursive_power(nb, power - 1);
	}
	return (r);
}
