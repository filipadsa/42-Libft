/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:34:41 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/15 09:53:47 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char	*us1;
	unsigned const char	*us2;

	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 1 && *us1 && *us1 == *us2)
	{
		us1++;
		us2++;
		n--;
	}
	return (*us1 - *us2);
}

/* #include <stdio.h>

int main()
{
  const char  *s1 = "ola";
  const char  *s2 = "ole";
  size_t      n = 2;

  printf("%d", ft_strncmp(s1, s2, n));
  return (0);
} */
