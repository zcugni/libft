/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_lstfindi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 14:34:26 by zcugni            #+#    #+#             */
/*   Updated: 2018/05/02 14:34:28 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return the index of the element in the list if it exist
*/

int	m_lstfindi(t_list *list, void *content, size_t size)
{
	t_list	*tmp;
	int		i;

	tmp = list;
	i = 0;
	while (tmp)
	{
		if (tmp->content)
		{
			if (ft_memcmp((const void *)tmp->content,
										(const void *)content, size) == 0)
				return (i);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
