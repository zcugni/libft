/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 10:58:34 by zcugni            #+#    #+#             */
/*   Updated: 2019/01/07 13:43:41 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	free_ret(char **trimmed, int return_val)
{
	ft_strdel(trimmed);
	return (return_val);
}

int			ft_atoi(char *str)
{
	int		nb;
	int		i;
	char	*trimmed;

	nb = 0;
	i = 0;
	trimmed = ft_strtrim(str);
	if (trimmed[0] == '-' || trimmed[0] == '+')
		i++;
	while (trimmed[i] && ft_isdigit(trimmed[i]))
	{
		nb *= 10;
		nb += (trimmed[i] - 48);
		i++;
	}
	if (trimmed[i])
		return (free_ret(&trimmed, 0));
	if (trimmed[0] == '-')
		return (free_ret(&trimmed, -nb));
	return (free_ret(&trimmed, nb));
}
