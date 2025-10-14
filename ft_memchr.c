/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:54:22 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 19:24:09 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *search, int c, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *)search;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}

/* #include <stdio.h>

int main()
{
  const char  *search = "ola";
  int         c = 'l';
  size_t      n = 3;
  char        *result;

  result = ft_memchr(search, c, n);
  if (result)
		printf("Found '%c' at position: %zu\n", c, result - search);
	else
		printf("'%c' not found in first '%zu' bytes\n", c, n);
  return (0);
} */
