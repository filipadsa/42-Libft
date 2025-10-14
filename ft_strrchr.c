/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:48:49 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/09 13:48:20 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*p;
	unsigned char 	uc;

	p = s;
	uc = (unsigned char)c;
	while (*p)
		p++;
	while (p >= s)
	{
		if (*p == uc)
			return ((char *)p);
		p--;
	}
	return (NULL);
}

/* #include <stdio.h>

int main()
{
  const char  *s = "carapau";
  int         c = 'a';
  char        *result;

  result = ft_strrchr(s, c);
  if (result)
    printf("Last '%c' found at position: %ld\n", c, result - s);
	else
		printf("Character '%c' not found\n", c);
	return (0);
} */
