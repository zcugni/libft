/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_atoi_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 14:44:10 by zcugni            #+#    #+#             */
/*   Updated: 2019/01/21 14:44:11 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	conv_to_base(char chara)
{
	if (chara >= 48 && chara <= 57)
		return (chara - 48);
	else if (chara == 'A' || chara == 'a')
		return (10);
	else if (chara == 'B' || chara == 'b')
		return (11);
	else if (chara == 'C' || chara == 'c')
		return (12);
	else if (chara == 'D' || chara == 'd')
		return (13);
	else if (chara == 'E' || chara == 'e')
		return (14);
	else if (chara == 'F' || chara == 'f')
		return (15);
	return (0);
}

static int	free_and_ret(char **to_free, int ret)
{
	ft_strdel(to_free);
	return (ret);
}

/*
**I consider that the given string will respect
**the base for the accepted letters
*/

int			m_atoi_base(char *str, int base)
{
	char	*trimmed;
	int		i;
	int		nb;

	if (base > 16)
		return (0);
	trimmed = ft_strtrim(str);
	i = 0;
	if (trimmed[0] == '-' && base != 10)
		return (free_and_ret(&trimmed, 0));
	else if (trimmed[0] == '-' && base == 10)
		i++;
	nb = 0;
	while (trimmed[i] && (ft_isdigit(trimmed[i])
		|| (trimmed[i] >= 65 && trimmed[i] <= 70)
		|| (trimmed[i] >= 97 && trimmed[i] <= 102)))
	{
		nb *= base;
		nb += conv_to_base(trimmed[i++]);
	}
	if (trimmed[i])
		return (free_and_ret(&trimmed, 0));
	if (trimmed[0] == '-')
		return (free_and_ret(&trimmed, -nb));
	return (free_and_ret(&trimmed, nb));
}
