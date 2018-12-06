/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_lstpop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 12:07:02 by zcugni            #+#    #+#             */
/*   Updated: 2018/05/06 12:07:03 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Remove the first element of a list and return it
*/

t_list	*m_lstpop(t_list **lst)
{
	t_list	*new;
	t_list	*tmp;

	new = m_lstnew((*lst)->content, (*lst)->content_size, 0);
	if (!new)
		m_exit_error(NULL, errno);
	tmp = *lst;
	*lst = (*lst)->next;
	m_memdel((void **)&tmp, sizeof(t_list *));
	return (new);
}
