/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:18:17 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/12 17:18:19 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *), int need_free)
{
	if (alst && *alst && del)
	{
		if ((*alst)->next)
			ft_lstdel(&((*alst)->next), del, need_free);
		if (need_free)
			del((*alst)->content);
		ft_memdel((void**)alst);
	}
}
