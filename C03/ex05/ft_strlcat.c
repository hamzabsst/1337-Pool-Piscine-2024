/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:24:29 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/14 15:23:43 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	d;
	unsigned int	i;

	s = len(src);
	d = 0;
	while (d < size && dest[d])
		d++;
	if (d == size)
		return (size + s);
	i = 0;
	while (src[i] && d + i + 1 < size)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}