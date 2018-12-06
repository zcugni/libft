/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:27:36 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/09 14:27:37 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Set to Null and free a string. (Also set to null each of it's char)
*/

void	ft_strdel(char **str)
{
	if (str && *str)
	{
		ft_strclr(*str);
		free(*str);
		*str = NULL;
	}
}
