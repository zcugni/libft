/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:34:17 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/10 14:34:21 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Print a string on the given file descriptor
*/

void	ft_putstr_fd(char const *str, int fd)
{
	int i;

	i = 0;
	if (str[i])
	{
		while (str[i])
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
	}
}
