/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:34:31 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/10 14:34:36 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return a string corresponding to the given number
*/

static void	divide(long long n, t_list **result)
{
	char		tmp_char;
	long long	tmp_int;

	tmp_int = n;
	if (tmp_int == 0)
		ft_lstadd(result, m_lstnew("0", 1, 1));
	while (tmp_int != 0)
	{
		if (tmp_int < 0)
			tmp_char = -(tmp_int % 10) + 48;
		else
			tmp_char = tmp_int % 10 + 48;
		ft_lstadd(result, m_lstnew(&tmp_char, 1, 1));
		tmp_int /= 10;
	}
	if (n < 0)
		ft_lstadd(result, m_lstnew("-", 1, 1));
}

char		*ft_itoa(long long n)
{
	t_list	*result;
	char	*res_str;

	result = NULL;
	divide(n, &result);
	res_str = m_lst_to_str(result);
	m_lstdel(&result, free);
	return (res_str);
}
