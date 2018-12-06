/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_lst_to_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 15:41:01 by zcugni            #+#    #+#             */
/*   Updated: 2018/01/04 15:41:03 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Create a string from a list
*/

char	*m_lst_to_str(t_list *lst)
{
	int		i;
	char	*str;
	t_list	*tmp_lst;

	tmp_lst = lst;
	str = malloc(m_lstlen(lst) + 1);
	if (!str)
		m_exit_error(NULL, errno);
	i = 0;
	while (tmp_lst)
	{
		str[i] = ((char *)(tmp_lst)->content)[0];
		i++;
		tmp_lst = (tmp_lst)->next;
	}
	str[i] = '\0';
	return (str);
}
