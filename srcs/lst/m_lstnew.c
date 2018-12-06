/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_lstnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:18:46 by zcugni            #+#    #+#             */
/*   Updated: 2018/03/09 19:48:02 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Create a new list node. Either keep the pointer to the content or malloc it
*/

static void	*free_ret(t_list **new)
{
	m_memdel((void **)new, sizeof(t_list *));
	return (NULL);
}

t_list		*m_lstnew(void const *content, size_t content_size,
															int need_malloc)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		m_exit_error(NULL, errno);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (need_malloc)
		{
			new->content = malloc(content_size);
			if (!new->content)
				return (free_ret(&new));
			ft_memcpy(new->content, content, content_size);
		}
		else
			new->content = (void *)content;
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
