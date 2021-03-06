/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:18:09 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/12 17:18:11 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Add a new node at the start of a list
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new)
	{
		if (*alst)
			new->next = *alst;
		*alst = new;
	}
}
