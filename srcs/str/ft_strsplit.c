/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcugni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:10:05 by zcugni            #+#    #+#             */
/*   Updated: 2017/11/09 18:10:06 by zcugni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return an array of string filled with part of the original string.
** The original string is split at the given character
*/

static int	count_words(char const *s, char c)
{
	int nb_words;
	int i;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		nb_words++;
		while (s[i] == c)
			i++;
	}
	return (nb_words);
}

static void	fill_arr(char const *s, char c, char **arr)
{
	size_t	j;
	size_t	word;
	size_t	i;

	i = 0;
	j = 0;
	word = 0;
	while (s[j])
	{
		while (s[j] && s[j] != c)
			j++;
		arr[word] = m_strndup(&(s[i]), j - i);
		while (s[j] && s[j] == c)
			j++;
		i = j;
		word++;
	}
	arr[word] = "\0";
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		nb_words;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == c)
		i++;
	nb_words = count_words(&(s[i]), c);
	if (nb_words > 0)
	{
		arr = malloc(sizeof(char *) * (nb_words + 1));
		if (!arr)
			m_exit_error(NULL, errno);
		fill_arr(s, c, &(arr[i]));
	}
	else
		arr = NULL;
	return (arr);
}
