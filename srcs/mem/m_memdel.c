/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_memdel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:26:18 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/09 14:26:22 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Free and set to null a memory area
*/

void	m_memdel(void **ap, size_t len)
{
	if (ap)
	{
		ft_bzero(*ap, len);
		free(*ap);
		*ap = NULL;
	}
}
