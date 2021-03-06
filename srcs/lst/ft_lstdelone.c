/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:18:25 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/12 17:18:27 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *))
{
	if (alst && del)
	{
		del((*alst)->content);
		m_memdel((void **)alst, sizeof(t_list *));
	}
}
