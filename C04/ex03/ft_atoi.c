/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:55:05 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/05 18:02:51 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	results;

	i = 0;
	sign = 1;
	results = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 15))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		results = results * 10;
		results = results + (str[i] - 48);
		i++;
	}
	return (results * sign);
}
/*int main()
{
    char c[] = "   --58-598";
    printf("%d", ft_atoi(c));*/
