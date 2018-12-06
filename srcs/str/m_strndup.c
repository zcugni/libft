/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_strndup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:33:02 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/10 14:33:07 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return a copy of a string up to an index
*/

char	*m_strndup(const char *s1, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	if (n != 0)
	{
		str = malloc((n + 1) * sizeof(char));
		if (!str)
			m_exit_error(NULL, errno);
		while (i < n)
		{
			str[i] = s1[i];
			i++;
		}
		str[i] = '\0';
	}
	else
		str = NULL;
	return (str);
}
