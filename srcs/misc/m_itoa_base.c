/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_itoa_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 16:07:07 by zcugni            #+#    #+#             */
/*   Updated: 2019/01/21 16:07:08 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nb(int nb, int base)
{
	int len;

	len = 1;
	while (nb <= -base || nb >= base)
	{
		nb /= base;
		len++;
	}
	return (len);
}

static char	convert_val(int nb, int upper)
{
	if (nb >= 1 && nb <= 9)
		return (nb + 48);
	else if (nb >= 10 && nb <= 15 && upper)
		return (nb + 31);
	else if (nb >= 10 && nb <= 15 && !upper)
		return (nb + 51);
	return (48);
}

/*
**Only goes up to base 16
**I don't take into consideration the '-'
**for other base than 10
*/

char		*m_itoa_base(int nb, int base, int upper)
{
	char	*str;
	int		len;
	int		is_neg;
	int		mod;

	len = len_nb(nb, base);
	is_neg = 0;
	if (nb < 0 && base == 10)
	{
		is_neg = 1;
		len++;
	}
	str = malloc(len + 1);
	if (!str)
		m_exit_error(NULL, errno);
	str[len + 1] = '\0';
	while (len > is_neg)
	{
		mod = (nb > 0) ? nb % base : -nb % base;
		str[--len] = convert_val(mod, upper);
		nb = nb / base;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}
