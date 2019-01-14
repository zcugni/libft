#include "libft.h"

/*
** Split a string at a given char
** Return an array of all of the parts of the string
*/

static int	count_words(char const *s)
{
	int nb_words;
	int i;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		while (s[i] && !ft_iswhitespace(s[i]))
			i++;
		nb_words ++;
		while (s[i] && ft_iswhitespace(s[i]))
			i++;
	}
	return (nb_words);
}

static void	fill_arr(char const *s, char **arr)
{
	size_t	j;
	size_t	word;
	size_t	i;

	word = 0;
	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && !ft_iswhitespace(s[i]))
			i++;
		arr[word] = ft_strndup(&(s[i]), j - i);
		while (ft_iswhitespace([i]))
			i++;
		i = j;
		word++;
	}
	arr[word] = "\0";
}

char		**m_strsplit_white(char const *s)
{
	char	**arr;
	int	nb_words;
	int	i;
	
	if (!s)
		return (NULL);
	i = 0;
	while (ft_ishitespace(s[i]))
		i++;
	nb_words = count_words(&(s[i]));
	arr = malloc(sizeof(char *) * (nb_words + 1));
	if (!arr)
		m_exit_error(NULL, errno);
	fil_arr(s, arr);
	return (arr);
}
