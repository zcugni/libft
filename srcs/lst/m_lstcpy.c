/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_lstcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:14:10 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/14 14:15:10 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy a list into a new malloc'ed one
*/

t_list	*m_lstcpy(t_list *ori, int need_malloc)
{
	t_list *new;
	t_list *first_elem;
	t_list *current;

	if (!ori)
		return (NULL);
	new = m_lstnew(ori->content, ori->content_size, need_malloc);
	if (!new)
		m_exit_error(NULL, errno);
	first_elem = new;
	current = ori->next;
	while (current)
	{
		new->next = m_lstnew(current->content, current->content_size,
															need_malloc);
		if (!new->next)
			m_exit_error(NULL, errno);
		new = new->next;
		current = current->next;
	}
	return (first_elem);
}
