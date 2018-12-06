/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_lstdel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:18:17 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/12 17:18:19 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Free every node of a list. Free it's content only if necessary
*/

void	m_lstdel(t_list **alst, void (*del)(void *))
{
	if (alst && *alst && del)
	{
		if ((*alst)->next)
			m_lstdel(&((*alst)->next), del);
		if (del)
			del((*alst)->content);
		m_memdel((void **)alst, sizeof(t_list *));
	}
}
