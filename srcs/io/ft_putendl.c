/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:09:43 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/09 18:09:46 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Print a string on the standart output, followd by a newline
*/

void	ft_putendl(char const *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}
