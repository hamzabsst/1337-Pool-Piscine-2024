/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:27:00 by hbousset          #+#    #+#             */
/*   Updated: 2024/09/18 12:27:02 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS abs

static inline int	abs(int value)
{
	int	r;

	if (value < 0)
		r = -value;
	else
		r = value;
	return (r);
}
#endif
