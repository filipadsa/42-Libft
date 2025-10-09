/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:14:09 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/09 13:41:52 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	is_sep(char current, char c)
{
	return (current == c);
}

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && is_sep(s[i], c))
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && !is_sep(s[i], c))
				i++;
		}
	}
	return (count);
}

void	free_all(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static void	fill_split(char **result, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	word_index;

	i = 0;
	word_index = 0;
	while (s[i])
	{
		while (s[i] && is_sep(s[i], c))
			i++;
		start = i;
		while (s[i] && !is_sep(s[i], c))
			i++;
		if (i > start)
		{
			result[word_index] = ft_substr(s, start, i - start);
			if (!result[word_index])
			{
				free_all(result, word_index);
				return ;
			}
			word_index++;
		}
	}
	result[word_index] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	fill_split(result, s, c);
	return (result);
}
