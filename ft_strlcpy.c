/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:09:57 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/09 14:21:03 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	pos;

	len = 0;
	pos = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (pos < size - 1 && src[pos])
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (len);
}

/* #include <stdio.h>

int main()
{
  char  dest[10];
  const char  *src = "olaa";
  size_t  size_dest = sizeof(dest);

  printf("%zu", ft_strlcpy(dest, src, size_dest));
  return (0);
} */
