/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:38:51 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/15 10:22:02 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*(unsigned const char *)s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/* #include <stdio.h>

int	main()
{
	const char	*s = "carapau";
	char		c = 'p';
	char		*result;
	int			i;

	result = ft_strchr(s, c);
	if (result)
	{
		i = (result - s);
		printf("Found char '%c' at position %d\n", c, i);
	}
	else
		printf("Char '%c' not found", c);
	return (0);
} */
