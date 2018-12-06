/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:29:41 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/09 14:29:43 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Like ft_strmap, apply f function to each char of a string
** and create a new string with the result. But this time, also give the
** index of a char as a parameter
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		m_exit_error(NULL, errno);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
