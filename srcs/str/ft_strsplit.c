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
	int first_word;
	int nb_words;
	int i;

	i = 0;
	first_word = 1;
	nb_words = 0;
	while (s[i])
	{
		if (s[i] != c)
			if (first_word == 1 || s[i - 1] == c)
			{
				first_word = 0;
				nb_words++;
			}
		i++;
	}
	return (nb_words);
}

static void	add_words(char const *s, char c, char **tmp_arr)
{
	int		first_word;
	size_t	size;
	int		nb_words;
	size_t	i;

	nb_words = 0;
	first_word = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			if (first_word == 1 || s[i - 1] == c)
			{
				first_word = 0;
				size = 0;
				while (s[i + size] != c && s[i + size])
					size++;
				tmp_arr[nb_words] = m_strndup(&s[i], size);
				nb_words++;
			}
		i++;
	}
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tmp_arr;
	int		nb_words;

	if (!s)
		return (NULL);
	nb_words = count_words(s, c);
	tmp_arr = malloc(sizeof(char*) * (nb_words + 1));
	if (tmp_arr == NULL)
		m_exit_error(NULL, errno);
	add_words(s, c, tmp_arr);
	tmp_arr[nb_words] = 0;
	return (tmp_arr);
}
