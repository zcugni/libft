/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_pow.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:13:24 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/20 09:42:08 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return a number to the given power
*/

long long	m_pow(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * m_pow(nb, power - 1));
}
