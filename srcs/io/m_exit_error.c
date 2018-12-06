/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_exit_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:21:56 by zcugni            #+#    #+#             */
/*   Updated: 2018/05/24 15:21:57 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write the given error msg (or let strerror do it) and exit the program
*/

void	m_exit_error(char *msg, int code)
{
	if (msg)
		ft_printf("%s", msg);
	else
	{
		strerror(errno);
		ft_putchar('\n');
	}
	exit(code);
}
