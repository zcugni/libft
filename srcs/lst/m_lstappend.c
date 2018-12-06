/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_lstappend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:14:21 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/14 14:14:22 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Add a new node at the end of a list
*/

void	m_lstappend(t_list **alst, t_list *new)
{
	t_list *tmp;

	if (new)
	{
		if (*alst)
		{
			tmp = *alst;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new;
		}
		else
			*alst = new;
	}
}
