/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_get_leaks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 12:07:54 by zcugni            #+#    #+#             */
/*   Updated: 2018/05/06 12:07:55 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Use the leaks system call to get the leaks where this function is called
*/

void	m_get_leaks(char *msg)
{
	system("leaks [exe_name]");
	ft_printf("\033[31m%s\033[0m", msg);
	getchar();
}
