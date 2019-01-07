/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_atoi_harsh.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:20:12 by zcugni            #+#    #+#             */
/*   Updated: 2019/01/07 13:43:11 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Harsher atoi than the original, with more option.
** Can accept or refuse negative number.
** Accept number up to long long size,
** 		but can force a number to be inferior to an int.
** The error return value is defined by a parameter.
*/

static int		free_ret(char **trimmed, int return_val)
{
	ft_strdel(trimmed);
	return (return_val);
}

long long		m_atoi_harsh(char *str, int accept_neg, int return_val,
																	int is_int)
{
	long long	nb;
	int			i;
	char		*trimmed;

	nb = 0;
	i = 0;
	trimmed = ft_strtrim(str);
	if (trimmed[i] == '-' && accept_neg)
		i++;
	else if (trimmed[i] == '-' && !accept_neg)
		return (free_ret(&trimmed, return_val));
	while (trimmed[i] && ft_isdigit(trimmed[i]))
	{
		nb *= 10;
		nb += (trimmed[i] - 48);
		i++;
	}
	if (trimmed[i] || (nb > 2147483647 && is_int))
		return (free_ret(&trimmed, return_val));
	if (trimmed[0] == '-')
		return (free_ret(&trimmed, -nb));
	return (free_ret(&trimmed, nb));
}
