/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:14:09 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/16 11:20:53 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	free_all(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
}

static int	fill_split(char **result, char const *s, char c)
{
	int		i;
	size_t	word_len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		if (!ft_strchr(s, c))
			word_len = ft_strlen(s);
		else
			word_len = ft_strchr(s, c) - s;
		result[i] = ft_substr(s, 0, word_len);
		if (!result[i])
		{
			free_all(result);
			return (0);
		}
		i++;
		s += word_len;
	}
	result[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	if (!fill_split(result, s, c))
		return (NULL);
	return (result);
}

// #include <stdio.h>

// int main()
// {
//   char const  *s = "olaxxxxxx,carapau";
//   char        c = 'x';
//   char        **result;
//   size_t      i = 0;

//   result = ft_split(s, c);
//   if (!result)
//     return (1);
//   while (result[i])
//   {
//     printf("result[%zu] = '%s'\n", i, result[i]);
//     free(result[i]);
//     i++;
//   }
//   free(result);
// }
