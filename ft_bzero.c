/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:51:54 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 11:28:29 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *mem, size_t len)
{
	size_t			i;
	unsigned char	*p;

  p = (unsigned char *)mem;
  i = 0;
  while (i < len)
  {
    p[i] = 0;
    i++;
  }
}

/* #include <stdio.h>

int main()
{
	char    buf[5] = {1, 2, 3, 4, 5};
	size_t  len = 3;

	ft_bzero(buf, len);

	len = 0;
	while (len < 5)
	{
		printf("%d ", buf[len]);
		len++;
	}
	printf("\n");

	return 0;
} */
