/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:18:46 by zcugni            #+#    #+#             */
/*   Updated: 2018/03/09 19:48:02 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_ret(t_list **new)
{
	ft_memdel((void **)new);
	return (NULL);
}

t_list	*ft_lstnew(void const *content, size_t content_size, int need_malloc)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		exit_error("malloc error\n", MALLOC_ERR);
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
