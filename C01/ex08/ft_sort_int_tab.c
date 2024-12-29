/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:03:57 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/02 21:44:40 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	swp;

	while (size >= 0)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				swp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swp;
			}
			i++;
		}
		size--;
	}
}
/*int main()
{
    int tab[] = {7, 9, 6, 3, 5};
    int size = 6;
    int i = 0;
	
	ft_sort_int_tab(tab, size);
    while (i < size -1)
    {
		int c;
		c = tab[i] + 48;
		write(1, &c, 1);
		i++;
    }
}*/
