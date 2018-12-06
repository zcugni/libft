/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_lstlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 15:56:10 by zcugni            #+#    #+#             */
/*   Updated: 2017/12/12 15:56:16 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return the length of a string
*/

size_t	m_lstlen(t_list *lst)
{
	t_list	*tmp;
	size_t	i;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
