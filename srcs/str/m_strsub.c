/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_strsub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 11:12:01 by zcugni            #+#    #+#             */
/*   Updated: 2018/01/17 11:12:02 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return a part of string as a new string
** (If the asked part doesn't exist, the behavior is not determined)
** Free the original string if needed
*/

char	*m_strsub(char *s, t_u_int start, size_t len, int need_free)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		m_exit_error(NULL, errno);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	if (need_free)
		ft_strdel(&s);
	return (str);
}
