/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:04:09 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/09 13:48:26 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	is_in_set(char c, const char *s2)
{
	while (*s2)
	{
		if (c == *s2)
			return (1);
		s2++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	start = 0;
	if (!s1 || !s2)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && is_in_set(s1[start], s2))
		start++;
	while (end > start && is_in_set(s1[end - 1], s2))
		end--;
	trimmed = (char *)malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + start, end - start);
	trimmed[end - start] = '\0';
	return (trimmed);
}
